clear classes; 
addPaths();

Npts = 100; %number of quadrature points (for all types of quadrature)
freq = 1;
reuseThresh = inf;

g1Coeffs = [1 0 1 0 0];

g2Coeffs = [1 0 0 0 0];

order = length(g1Coeffs)-1;

valleys = exp(2i*pi*(1/4 + (1:order))/order);

aVal =valleys(2);
bVal =valleys(4);

trueVal = 1.67481 + 0.69373i;

[G1, SPs_init1, orders1] = NSDeetsFromPoly(g1Coeffs, 1e-16);
[G2, SPs_init2, orders2] = NSDeetsFromPoly(g2Coeffs, 1e-16);

tic;
figure(1);
figSize = [-5 5];
xlim(figSize);
ylim(figSize);
[contoursOut1] = getSDtopology(G1,SPs_init1,order,aVal,bVal,false);
[z1, w1] = makeQuad(contoursOut1,1,Npts,G1{1});
t1 = toc;

%now initialise quadrature for g1 phase
% for gamma = contoursOut1
%   gamma.getQuad(freq, Npts, reuseThresh);  
% end

%compute value of g2 integral using g1 SD paths
g2 = G2{1};
tic;
[z21, w21] = makeQuad(contoursOut1,1,Npts,G2,reuseThresh);
t2 = toc;


%compute value of g2 integral using g2 SD paths
hold on;
[contoursOut2] = getSDtopology(G2,SPs_init2,order,aVal,bVal,true);
[z2, w2] = makeQuad(contoursOut2,1,Npts,g2);
xlim(figSize);
ylim(figSize);
hold on;
plot(z1,'x'); plot(z2,'o'); plot(z21,'^');
hold off;
display('Approximate integral with phase g2 using that of g1');
fprintf('Error for %d pts: %e\n',Npts,abs(sum(w21)-sum(w2)));
fprintf('Potential %.2fx speedup?',t1/t2);


%first test that reusing quadrature for the same phase doesn't give an
%error?