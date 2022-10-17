function Q = shortestInfinitePathV4(a,b,contours, covers, valleys, params)
% TO DO:
% * Super special case of two steepest exits in the same ball.

%% PART ONE: Get all connections as a result of overlapping/sharing of balls
    SEx_count = 0;

    CPs_adj_mat = eye(length(covers));
    num_CPs = length(covers);
    CPs = zeros(1,num_CPs);
    num_valleys = length(valleys);

    for n = 1:num_CPs
        CPs(n) = covers{n}.centre;
        % link steepest exits to balls
        local_SEx_count = 0;
        for SEx = covers{n}.steepestExits
            SEx_count = SEx_count + 1;
            %record all steepest exits in a vector
            SExs(SEx_count) = SEx;
            % count number of steepest exits
            local_SEx_count = local_SEx_count + 1;
            
            % for each steepest exit, find out which balls its in
            % and store this info as edges
            for m=1:num_CPs
                if covers{m}.isIn(SEx)
                    SEx_to_CP_adj(SEx_count,m) = 1;
                end
            end
        end

        local_SEx_range = (SEx_count-local_SEx_count+1):(SEx_count);
        % now connect the steepest exits on the circumferance with the centre of this ball
        SExs_adj_mat(local_SEx_range,local_SEx_range) = 1;
        % and connect the steepest exits to all other steepest exits on
        % circumferance of ball
        SEx_to_CP_adj(local_SEx_range,n) = 1;

        % work out which balls overlap with other balls, store the info
        for m = 1:num_CPs
            if abs(covers{n}.centre-covers{m}.centre) < covers{n}.radius + covers{m}.radius
                CPs_adj_mat(n,m) = 1;
            end
        end
    end

% now connect SEs to all other SEs inside the same ball
    for n=1:num_CPs
        SE_in_CP_logical_inds = (SEx_to_CP_adj(:,n)==1);
        SExs_adj_mat(SE_in_CP_logical_inds,SE_in_CP_logical_inds) = 1;
    end

    num_SExs = length(SExs);

%% PART TWO: Get all connections which result from contours

    % TO DO: UPDATE EVERYTHING BELOW TO ACCOUNT FOR STEEPEST ENTRANCES. ALL
    % INDEXING WILL CHANGE, DEPENDING ON WHERE IT SITS IN THE FULL
    % ADJACENCY MATRIX.

    % now determine which steepest exits connect with which valleys (or
    % possibly, steepest exits)
    SEs_to_valleys_adj = zeros(SEx_count, num_valleys);
%     SExs_to_SEns_adj = zeros(num_SEs,num_steepest_entrances);
    contour_count = 0;
    SExs_to_SEns_adj = [];
    SEns_to_CPs_adj = [];
    SEns = [];
    finite_path_indices = [];

    num_SEns = 0;
    % get number of steepest entrances
    for contour = contours
        if ~isinf(contour.length) % each finite contour will have one steepest entrance
            num_SEns = num_SEns + 1;
        end
    end
    % initialise these matrices - stretching them in the loop didn't work.
    SEns_to_CPs_adj = zeros(num_SEns,num_CPs);
    SExs_to_SEns_adj = zeros(num_SExs,num_SEns);

    num_SEns = 0;
    for contour = contours
        contour_count = contour_count + 1;
        if isinf(contour.length) % infinite contour
            SEx_index = find(SExs==contour.startPoint);
            end_valley_index = find(valleys==contour.endValley);
            SEs_to_valleys_adj(SEx_index, end_valley_index) = 1;
        else % finite contour
            num_SEns = num_SEns + 1;
            SEns(num_SEns) = contour.endPoint;
            SEx_index = find(SExs==contour.startPoint);
            SExs_to_SEns_adj(SEx_index,num_SEns) = 1; % this is a special 1! could change to a 2?
            % below 2xN matrix records that this is a special link, via a finite
            % contour:
            finite_path_indices = [finite_path_indices; SEx_index num_SEns];
            end_CP_index = contour.endCoverIndex;
            SEns_to_CPs_adj(num_SEns,end_CP_index) = 1;
            % now link to every steepest exit that the stationary point linked to 
            % the critical point at the centre of the ball at the end of the contour
%             SExs_to_SEns_adj(:,num_SEns) = SE_to_CP_adj(:,end_CP_index);
            SExs_to_SEns_adj(SEx_to_CP_adj(:,end_CP_index)==1,num_SEns) = 1;
        end
        SExs_to_contours_vec(SEx_index) = contour_count;
    end

    %% PART THREE: combine all this stuff to build the full adjacency matrix:
    %diagonal blocks:
    % CPs_adj_mat
    % SEs_adj_mat
    % an identity matrix for the valleys
    %five non-zero non-diagonal blocks:
    % SE_to_CP_adj
    % SEs_to_valleys_adj
    % steepest_entrances_to_CPs
    % SEs_to_steepest_entrance_adj

    % initialise full adjacency matrix:
    adj_mat = eye(num_CPs+num_SExs+num_SEns+num_valleys);
    % Compute ranges of relevant indices. This will be quite useful.
    CPs_range = 1:num_CPs;
    SExs_range = (num_CPs+1):(num_CPs+num_SExs);
    SEns_range = (num_CPs+num_SExs+1):(num_CPs+num_SExs+num_SEns);
    valleys_range = (num_CPs+num_SExs+num_SEns+1):(num_CPs+num_SExs+num_SEns+num_valleys);
    % now allocate diagonal blocks:
    adj_mat(CPs_range,CPs_range) = CPs_adj_mat;
    adj_mat(SExs_range,SExs_range) = SExs_adj_mat;
    % (valleys can be skipped as this is identity)
    % now the non-diagonal blocks:
    adj_mat(SExs_range,CPs_range) = SEx_to_CP_adj;
    adj_mat(SExs_range,valleys_range) = SEs_to_valleys_adj;
    adj_mat(SExs_range,SEns_range) = SExs_to_SEns_adj;
    adj_mat(SEns_range,CPs_range)= SEns_to_CPs_adj;

    % now convert to symmetric logical form
    adj_mat = (adj_mat+adj_mat')>0;

    %% determine which indices correspond to which endpoints
    ab = [a b];
    endPointIndices = zeros(1,2);
    for n=1:2
        if params.infContour(n)
            for m = 1:num_valleys
                if abs(ab(n) - valleys(m)) < 10*eps
                    endPointIndices(n) = num_CPs + m;
                    break
                end
            end
        else
            for m=1:num_SExs
                if abs(ab(n)-SExs(m)) < 10*eps
                    endPointIndices(n) = num_CPs + m;
                    break;
                end
            end
        end
    end

    if min(endPointIndices) == 0
        error('Could not find endpoints in valleys or steepest exits');
    end

    %% now compute shortest path and allocate quadrature 'ingredients'
%      Gr = graph(adj_mat,'upper');
%      [seq, ~] =shortestpath(Gr,endPointIndices(1),endPointIndices(2));
     [~, seq] = dijkstra(adj_mat*1,endPointIndices(2),endPointIndices(1));

     % it will be useful to group these points together:
     CPs_and_SExs_and_SEns = [CPs SExs SEns];

     all_to_CP_map = @(n) n;
     all_to_SEx_map = @(n) n-num_CPs;%num_SEns
     all_to_SEn_map = @(n) n-num_CPs-num_SExs;
     all_to_valley_map = @(n) n-num_CPs-num_SExs-num_SEns;

    % turn the path into instructions for quadrature
    for n=1:(length(seq)-1)
        % now categorise every type of interaction
        start_index = seq(n);
        end_index = seq(n+1);
        if ismember(start_index, SExs_range) && ismember(end_index,valleys_range)
            start_SE_index = all_to_SEx_map(start_index);
%             end_valley_index = all_to_valley_map(end_index);
            % inf contour from steepest exit to valley
            Q{n}.type = 'infSD';
            Q{n}.inOut = 1;
            Q{n}.contour = contours(SExs_to_contours_vec(start_SE_index));
        elseif ismember(start_index,valleys_range) && ismember(end_index, SExs_range)
            end_SE_index = all_to_SEx_map(end_index);
            % as above, reversed case
            Q{n}.type = 'infSD';
            Q{n}.inOut = -1;
            Q{n}.contour = contours(SExs_to_contours_vec(end_SE_index));
        elseif ismember(start_index, SExs_range) && ismember(end_index, SEns_range) ...
                && ismember([all_to_SEx_map(start_index) all_to_SEn_map(end_index)],finite_path_indices,'rows')
            %finite contour, from steepest exit to steepest entrance
            Q{n}.type = 'finSD';
            Q{n}.inOut = 1;
            Q{n}.contour = contours(SExs_to_contours_vec(all_to_SEx_map(start_index)));
        elseif ismember(end_index, SExs_range) && ismember(start_index, SEns_range) ...
                && ismember([all_to_SEx_map(end_index) all_to_SEn_map(start_index)],finite_path_indices,'rows')
            % as above, reversed case
            Q{n}.type = 'finSD';
            Q{n}.inOut = -1;
            Q{n}.contour = contours(SExs_to_contours_vec(all_to_SEx_map(end_index)));
        else %must be two points inside a region of mild oscillation,
            % can use straight lines here
            if CPs_and_SExs_and_SEns(start_index) ~= CPs_and_SExs_and_SEns(end_index)
                Q{n}.type = 'strLn';
                Q{n}.a = CPs_and_SExs_and_SEns(start_index);
                Q{n}.b = CPs_and_SExs_and_SEns(end_index);
            end
        end
    end
end