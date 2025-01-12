function plotGraph(graph_data, covers, finite_endpoints)
% produces a visual representation of the planar PathFinder graph
    hold on;
    set(0,'defaultTextInterpreter','latex');
    R_stretch = 1.25; % need a better way of choosing this radius
    centre = mean(graph_data.CPs);
    R = R_stretch*max(abs(centre-graph_data.CPs));

    cols = {[0 0.4470 0.7410],[0.8500 0.3250 0.0980],[0.9290 0.6940 0.1250],...
        [0.4940 0.1840 0.5560], [0.4660 0.6740 0.1880], [0.3010 0.7450 0.9330],...
                [0.6350 0.0780 0.1840]};

    lightGrayColor = [.95 .95 .95];
    fontSize = 18;
    markerSize = 35;
    thick_width = 3.0;


    for C=covers
        if iscell(C)
            C=C{1};
        end
        hold on;
%         plot(C);
        if C.radius>0
           fillCircle(C.centre,C.radius,lightGrayColor);
%            C.plot(':k');
        end
        hold on;
    end
    
    for n = 1:length(graph_data.points)
        for m=1:length(graph_data.points)
             if graph_data.adj_mat(m,n)
%                 draw_line(graph_data.points(m), graph_data.points(n));
                if check_if_on_shortest_path(m,n)
                    draw_thick_line(graph_data.points(m), graph_data.points(n));
                else
                    draw_line(graph_data.points(m), graph_data.points(n));
                end
             end
        end
    end

    valley_nodes = centre+R*graph_data.valleys;
    for n = 1:length(graph_data.points)
        for m_=1:length(graph_data.valleys)
            m = m_ + length(graph_data.points);
            if graph_data.adj_mat(m,n)
                if check_if_on_shortest_path(m,n)
                    draw_thick_line(graph_data.points(n), valley_nodes(m_));
                else
                    draw_line(graph_data.points(n), valley_nodes(m_));
                end
            end
        end
    end
    
    plot(valley_nodes,'.k','MarkerSize',markerSize, 'Color',cols{1});

    plot(graph_data.SExs,'.b','MarkerSize',markerSize, 'Color',cols{4});
    plot(graph_data.SEns,'.g','MarkerSize',markerSize, 'Color',cols{5});
    plot(graph_data.CPs,'.r','MarkerSize',markerSize,'Color', cols{2});
%     legend('Valleys','Critical points','Steepest exits','Steepest Entrances');

    legend('','Location', 'eastoutside');
    plot(NaN,NaN,'.k','MarkerSize',markerSize,'DisplayName','Valleys','Color', cols{1});
    plot(NaN,NaN,'.r','MarkerSize',markerSize,'DisplayName','Stationary points','Color', cols{2});
    if length(finite_endpoints)>1
        plot(finite_endpoints,'.m','MarkerSize',markerSize,'DisplayName','Finite endpoints','Color', cols{3});
    end
    plot(NaN,NaN,'.b','MarkerSize',markerSize,'DisplayName','Exits','Color', cols{4});
    plot(NaN,NaN,'.g','MarkerSize',markerSize,'DisplayName','Entrances','Color', cols{5});
    plot(NaN,NaN,'-k','DisplayName','Edges')
    plot(NaN,NaN,'-k','LineWidth',thick_width,'DisplayName','Edges in shortest path')
%     plot(NaN,NaN,':k','DisplayName','Ball subgraphs')
%     legend('Valleys','Critical points','Steepest exits','Steepest Entrances');

    xlim(1.1*[min(real(valley_nodes)) max(real(valley_nodes))]);
    ylim(1.1*[min(imag(valley_nodes)) max(imag(valley_nodes))]);
    set(gca,'fontsize', fontSize);
    set(gcf, 'Position', [0 0 800 800]);
    axis equal;
    axis off;
    hold off;

    function draw_line(a,b)
        hold on;
        plot([a b]+1i*eps,'-k');
    end
    function draw_thick_line(a,b)
        hold on;
        plot([a b]+1i*eps,'-k','LineWidth',thick_width);
    end

    function draw_line_to_valley(a,v)
        hold on;
        plot([a R*v]+1i*eps,'-k');
    end
    
    function yn = check_if_on_shortest_path(m,n)
        yn = false;
        for j=1:(length(graph_data.shortest_path)-1)
            if (m==graph_data.shortest_path(j) && n==graph_data.shortest_path(j+1))...
               || (n==graph_data.shortest_path(j) && m==graph_data.shortest_path(j+1))
               yn = true;
               break;
            end
        end
    end
end