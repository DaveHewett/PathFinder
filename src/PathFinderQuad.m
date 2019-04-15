function [z,w] = PathFinderQuad(a, b, phaseIn, freq, Npts, infContour)
%returns weights and nodes for efficient evaluation of oscillatory integral
    
    %get info about stationary points:
    [phase, stationaryPoints, stationaryPointsOrders, valleys] = getInfoFromPhase(phaseIn);
    
    %cover each stationary point:
    [covers, intersectionMatrix, clusters, clusterEndpoints, HermiteCandidates] = getCovers(phase{1},freq,stationaryPoints,infContour,a,b, stationaryPointsOrders);
    
    %make the contours from each cover:
    contours = getContours(phase, covers, infContour, valleys, clusters, clusterEndpoints);
    
    %now do the complicated stuff:
    if infContour
        endPointIndices = NaN(2,1);
    else
        endPointIndices = [1 2];
    end
    quadIngredients = shortestInfinitePathV3(contours, covers, intersectionMatrix, valleys, a, b, endPointIndices, HermiteCandidates);
    %contoursInSeq = contours(contourSeq);
    
%     if infContour
%         [z, w] = makeQuad(contoursInSeq, freq, Npts, phase);
%     else
%         [z, w] = makeQuad(contoursInSeq, freq, Npts, phase, false, [a b]);
%     end

    [z, w] = makeQuadV3(quadIngredients, freq, Npts, phase{1}, phase{2}, phase{3}, phase{4});
    
    % - - - - - - - - -
%     contourSeq = shortestInfinitePathV2(contours, covers, intersectionMatrix, valleys, a, b, true);
%     contoursInSeq = contours(contourSeq);
%     [z2, w2] = makeQuad(contoursInSeq, freq, Npts, phase);
end