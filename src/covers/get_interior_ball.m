function radius = get_interior_ball(g_coeffs, freq, SP, order, C)
%MEX-able code to efficiently determine interior ball of the
%\omega|g(z)-g(\xi)|=C$ contours

    num_rays = uint16(16);
    thresh = 0.05/freq;
    guess_const = double(2);
    F = @(r,theta) freq*abs(polyval(g_coeffs,r*exp(1i*theta))-polyval(g_coeffs,SP)) - C;
    nu = order+1;

%% Initial guess:
    [~, dG_SP] = get_derivs_at_x(g_coeffs, SP, nu);
    guess_radius = double(abs(double(factorial(nu))*C/(freq*abs(dG_SP(nu))))^(1/double(nu)));
    %make sure this isn't too ridiculous
    guess_radius = (min(guess_radius, guess_const/freq));
    ray_mins = inf(num_rays,1);

%% solve problem on each ray
    ray_intervals = [(zeros(num_rays,1)) (guess_radius)*(ones(num_rays,1))];
    no_sign_change = true;
    while no_sign_change
        for n=1:num_rays
            if sign(ray_intervals(n,1)) ~= sign(ray_intervals(n,2))
                no_sign_change = false;
                ray_mins(n) = bisection(@(r) F(r,double(2*pi*n/num_rays)), ray_intervals(n,1), ray_intervals(n,2), thresh);
            end
        end
        if no_sign_change
            %increase the range
            ray_intervals = ray_intervals + guess_radius;
        end
    end

    radius = min(ray_mins);

end