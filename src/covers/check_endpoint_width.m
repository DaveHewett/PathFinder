function yn = check_endpoint_width(a,b,g_coeffs,freq,Cosc,num_rays,int_balls_yn,imag_thresh)

    % get radii around endpoints, as if they were to be balls
    r_a = get_smallest_supset_ball_mex(g_coeffs.', freq, a, Cosc, num_rays,~int_balls_yn,imag_thresh);
    r_b = get_smallest_supset_ball_mex(g_coeffs.', freq, b, Cosc, num_rays,~int_balls_yn,imag_thresh);

    % check if the (pretend) balls overlap
    yn = (abs(b-a)<r_a+r_b);
end