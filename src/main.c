#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "graph.h"




int main() {
	
	// Initi the Graph with n Nodes
	int n = 7;
	list *graph = init_graph(n);
	
	// create nodes of the graph
	add_node(0, 1, &graph);
	add_node(0, 4, &graph);
	add_node(0, 2, &graph);
	add_node(0, 3, &graph);
	add_node(1, 2, &graph);
	add_node(2, 1, &graph);
	add_node(2, 3, &graph);
	add_node(3, 2, &graph);
	
	// Display the Graph
	display_graph(graph, n);
	
	// Check if the graph accept Euler Path 
	if (isEulerPath(graph, n)) {
		printf("✅ this graph accept euler path\n");
	} else printf("🚫 this graph does not accept euler path\n");
	
	// Check if the graph accept Euler Circuit
	if (isEulerCircuit(graph, n)) {
		printf("✅ this graph accept euler circuit\n");
	} else printf("🚫 this graph does not accept circuit path\n");
	
	
	
	return 0;
}





