// THis file for the prototype of the functions

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "graph.h"


list *init_graph(int n) {
	if (n == 0) return NULL;
	list *graph = (list *) malloc(sizeof(list) * n);
	return graph;
}


void add_node(int s, int d, list **graph) {
	
	// check if the graph initialize
	if (*graph == NULL) {
		printf("Graph is not initialize\n"); return;
	}
	
	// create node
	node *new_node = (node *) malloc(sizeof(node));
	if (new_node == NULL) {
		printf("can not create a node\n"); return;
	}
	
	// add node in adjacency list
	new_node->data = s;
	new_node->next = NULL;
	if (graph[s]->head == NULL) {
		graph[s]->head = new_node;
	} else {
		new_node->next = graph[s]->head;
		graph[s]->head = new_node;
	}
	
}

void display_graph(list *graph, int n) {
	
	if (graph == NULL) {
		printf("Graph is not initialize");
	}
	
	for (int i = 0; i < n; i++) {
		node *temp = graph[i]->head;
		for (int j = 0; j < n; j++) {
			printf("%d", temp->data);
			temp = temp->next;
		}
	}
	
	
}








