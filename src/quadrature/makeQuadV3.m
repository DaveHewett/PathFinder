function [z, w] = makeQuadV3(quadInfo, freq, Npts, g, dg, ddg, dddg)

tol = 1e-12;

    %collapse infinite contours connected by a single order cover into a
    %single Hermite integral
    n = 1;
    while true
        if n>length(quadInfo)
            break;
        end
        if strcmp(quadInfo{n}.type,'strLn')
           if quadInfo{n}.Hermite && false
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
    sgw = @(z) exp(1i*freq*g(z));
    z = []; w = [];
    for n = 1:length(quadInfo)
       switch quadInfo{n}.type
           case {'infSD','finSD'}
               [z_, w__] = quadInfo{n}.contour.getQuad(freq,Npts);
               w_ = w__*quadInfo{n}.inOut;
           case 'strLn'
               if quadInfo{n}.Hermite && false
                   [z_, w_] = SDpathODE_Hermite(Npts, g, dg, ddg, dddg, freq, quadInfo{n}.h0, quadInfo{n}.dh0m, tol);
                   %may return a NaN if we're unlucky - in which case we
                   %call this function again, using the backup quad data,
                   %without instructions to use Hermite quadrature:
                   if max(isnan(w_))
                       [z_, w_] = makeQuadV3(quadBackup{n}, freq, Npts, g, dg, ddg, dddg);
                   end
               else
                   [z_, w__, dh_] = gauss_quad_complex(quadInfo{n}.a, quadInfo{n}.b, Npts);
                   w_ = w__.*sgw(z_)*dh_;
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