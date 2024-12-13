#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "graph.h"




int main() {
	
	// create nodes of the graph
	int n = 7;
	list *graph = init_graph(n);
	add_node(0, 1, &graph);
	add_node(0, 2, &graph);
	add_node(0, 3, &graph);
	add_node(1, 2, &graph);
	display_graph(graph, n);
	
	
	return 0;
}





