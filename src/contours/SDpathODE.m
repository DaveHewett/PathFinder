function [p, h, dhdp] = SDpathODE(pMax, dg, k, h0, tol, ODEevent)
    if nargin <= 5
        ODEevent = [];
    end
    if nargin == 4
        tol = 1e-3;
    end

    pMax = pMax(:).';
    %computes NSD path h(p) and h'(p)

    %ODE for path of steepest descent:
    ODEh = @(p,h) 1i./(k*dg(h)); 
    
    %solve using ODE45 at a given tolerance:
    if ~isempty(ODEevent)
        [p,h] = ode45(ODEh, [0 pMax], h0, odeset('RelTol', tol,'Events', ODEevent));
    else
        [p,h] = ode45(ODEh, [0 pMax], h0, odeset('RelTol', tol));
    end
    p = p(2:end);
    h = h(2:end);
    
    %reconstruct h'(p) using ODE
    dhdp = ODEh(p,h);

end