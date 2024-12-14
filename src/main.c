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
	display_graph(graph, n);
	
	if (isEulerPath(graph, n)) {
		printf("✅ this graph accept euler path\n");
	} else printf("🚫 this graph does not accept euler path\n");
	
	if (isEulerCircuit(graph, n)) {
		printf("✅ this graph accept euler circuit\n");
	} else printf("🚫 this graph does not accept circuit path\n");
	
	
	
	return 0;
}





