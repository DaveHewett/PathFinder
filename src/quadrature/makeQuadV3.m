function [z, w, HermiteInds] = makeQuadV3(quadInfo, freq, Npts, G, covers, intersectionMatrix, params)

% new fancy GQ needs additional inputs: (covers,a,b,a_index,b_index,intersectionMatrix)

    tol = 1e-12;

    Npts = max(Npts,2);
    
    HermiteInds = [];

    quad_params = struct('solver', params.quad_solver, 'step_size', params.quad_step_size, ...
                    'Taylor_terms', params.Taylor_terms, 'turbo', params.turbo,...
                    'max_SP_integrand_val', params.max_SP_integrand_val, 'contourStartThresh', params.contourStartThresh,...
                    'finitePathTruncL',params.finitePathTruncL,...
                    'NewtonThresh', params.NewtonThresh, 'NewtonIts', params.NewtonIts);

    %collapse infinite contours connected by a single order cover into a
    %single Hermite integral
    n = 1;
    while true
        if n>length(quadInfo)
            break;
        end
        if strcmp(quadInfo{n}.type,'strLn')
           if quadInfo{n}.Hermite
               [quadBackupTemp{1:3}] = quadInfo{(n-1):(n+1)};
               quadBackupTemp{2}.Hermite = false;
               %store this incase the Hermite integral is unstable
               quadInfo = cellDel(quadInfo,n+1);
               quadInfo = cellDel(quadInfo,n-1);
               [quadBackup{n-1}] = quadBackupTemp;
           else 
               n = n + 1;
           end
        else
            n = n + 1;
        end
    end

    %make a corretion for standard Gauss, which has a different weight
    %function:
    sgw = @(z) exp(1i*freq*G{1}(z));
    z = []; w = [];
    for n = 1:length(quadInfo)
       switch quadInfo{n}.type
           case {'infSD','finSD'}
%                if abs(exp(1i*freq*quadInfo{n}.contour.startPoint))>params.contourStartThresh
                   [z_, w__] = quadInfo{n}.contour.getQuad(freq,Npts, quad_params);
                   w_ = w__*quadInfo{n}.inOut;
%                else
%                     z_ = [];
%                     w_ = [];
%                end
           case 'strLn'
               if quadInfo{n}.Hermite
%                    if abs(exp(1i*freq*quadInfo{n}.h0))>params.contourStartThresh
                       [z_, w_] = SDpathODE_Hermite(2*Npts, G{1}, G{2}, G{3}, G{4}, freq, quadInfo{n}.h0, quadInfo{n}.dh0m, tol, params.turbo);
                       HermiteInds = [HermiteInds quadInfo{n}.a_coverIndex];
                       %may return a NaN if we're unlucky - in which case we
                       %call this function again, using the backup quad data,
                       %without instructions to use Hermite quadrature:
                       if max(isnan(w_))
                           [z_, w_] = makeQuadV3(quadBackup{n}, freq, Npts, G{1}, G{2}, G{3}, G{4});
                       end
%                    else
%                         z_ = [];
%                         w_ = [];
%                    end
               else
                   [z_, w__, dh_] = GQfancy(covers, quadInfo{n}.a, quadInfo{n}.b, ...
                                    quadInfo{n}.a_coverIndex, quadInfo{n}.b_coverIndex,...
                                    intersectionMatrix, max(Npts,ceil(params.numOscs*Npts)));
                   w_ = w__.*sgw(z_).*dh_;
               end
           otherwise
               error('Do not recognise quad type');
       end
       
       %add to the total quadrature
        z = [z; z_]; 
        w = [w; w_];
    end
    
    function C_ = cellDel(C,n) %on eurotunnel so can't check if this function already exists
        N = length(C);
        [C_{1:(n-1)}] = C{1:(n-1)};
        [C_{n:(N-1)}] = C{(n+1):N};
    end
end