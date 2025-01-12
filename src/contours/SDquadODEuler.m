function [h_log_out] = SDquadODEuler(h0, gCoeffs, SPs, cover_radii, valleys, base_step_size, n_max)

    %computes NSD path h(p) and h'(p)
    valley_index = [];
    ball_index = [];
    success = true;
%     n_max = 1000;

    %ODE for path of steepest descent:
    order = length(gCoeffs)-1;
    dgCoeffs = gCoeffs(1:(end-1)).*(order:-1:1);
    ddgCoeffs = dgCoeffs(1:(end-1)).*((order-1):-1:1);
    F = @(h) 1i./(polyval(dgCoeffs,h));

    % may not need this yet - but it's the local error est
    abs_dF = @(h) abs(polyval(ddgCoeffs,h)/(polyval(dgCoeffs,h))^2);

    % get parameters for halting zones
    argBeta = angle(gCoeffs(1));
    Cnr = getNoReturnConstant(gCoeffs);

    halt_euler = @(h) inAball(h, SPs, cover_radii) || beyondNoReturn(h,Cnr,argBeta,valleys);

    % main loop
    h = h0;
    p_log = zeros(n_max,1);
    h_log = zeros(n_max,1)+eps*1i;
    p_log(1) = 0;
    h_log(1) = h0;
    n =1;
    while ~halt_euler(h)
        n = n+1;
        step_size = base_step_size*min(1/(abs_dF(h)),... %aims to keep error roughly constant
                    min(abs(SPs-h))/abs(F(h))); % stops us getting too close to branch
        h = h + step_size*F(h);
        p_log(n) = p_log(n-1)+step_size;
        h_log(n) = h;
        if n==n_max
            success = false;
            break
        end
    end
    p_log_out = p_log(1:n);
    h_log_out = h_log(1:n);

    if success
        if inAball(h, SPs, cover_radii)%beyondNoReturnNested(h,Cnr,argBeta,valleys)
            [~,ball_index] = inAball(h, SPs, cover_radii);
        else
            [~,valley_index] = beyondNoReturn(h,Cnr,argBeta,valleys);
        end
    else
        ball_index = [];
        valley_index = [];
    end

%     function [value,v_index] = beyondNoReturnNested(h)
%         %function corresponding to an event which would halt ODE solve, because SD
%         %path is at 'point of no return'.
%         
%         wiggle_room = 0.95;
%         
%         % the 'no return test'
%         order = length(valleys);
%         R = abs(h);
%         theta = mod(angle(h),2*pi);
%         theta_diff = wiggle_room*pi/(2*order);
%     
%         [~,v_index] = min(abs(exp(1i*angle(valleys))-exp(1i*angle(h))));
%         v = mod(angle(valleys(v_index)),2*pi);
%     
%         %first check if theta_end is pointing sufficiently close to valley
%         theta_L = mod(v-theta_diff,2*pi);
%         theta_R = mod(v+theta_diff,2*pi);
%         in_arc = false;
%         if theta_L<theta_R
%             if theta_L<theta && theta< theta_R
%                 in_arc = true;
%             end
%         else % arc endpoints are either side of zero=2pi
%             if theta_L<theta % case where theta_L is to left of zero=2pi
%                 in_arc = true;
%             elseif theta<theta_R % case where theta_L is to right of zero=2pi
%                 in_arc = true;
%             end
%         end
%     
%         if in_arc ...
%             && R>1 && R*min(sin(order*(v+theta_diff+argBeta/order)),cos(order*(v-theta_diff+argBeta/order)))>Cnr...
%             && theta_diff<pi/(2*order)
%             value = true;
%         else
%             value = false;
%         end
%     %     end
%     end
% 
%     function value = inAballNested(h)
%         value = false;
%         for index = 1:length(SPs)
%             if abs(h-SPs(index))<cover_radii(index)
%                 value = true;
%                 break;
%             end
%         end
%     end

end