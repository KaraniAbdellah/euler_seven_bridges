#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "graph.h"




int main() {
	
	// create nodes of the graph
	int n = 7;
	list *graph = init_graph(n);
	
	display_graph(graph, n);
	
	
	
	return 0;
}





