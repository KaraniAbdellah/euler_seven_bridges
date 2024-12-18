// THis file for the prototype of the functions

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "graph.h"


list *init_graph(int n) {

	if (n <= 0) return NULL;
	list *graph = (list *) malloc(sizeof(list) * n);
	if (graph == NULL) return NULL;
	
	for (int i = 0; i < n; i++) {
		graph[i].head = NULL;
	}
	return graph;
	
}


void add_node(int s, int d, list **graph) {
	
	
	// check if the graph initialize
	if (graph == NULL || *graph == NULL) {
		printf("Graph is not initialize\n"); return;
	}
	
	// create new node
	node *new_node = (node *) malloc(sizeof(node));
	if (new_node == NULL) {
		printf("can not create a node\n"); return;
	}
	
	// add node in adjacency list
	new_node->data = d;
	new_node->next = NULL;
	if ((*graph)[s].head == NULL) {
		(*graph)[s].head = new_node;
	} else {
		new_node->next = (*graph)[s].head;
		(*graph)[s].head = new_node;
	}
	
}

void display_graph(list *graph, int n) {
	
	if (graph == NULL) {
		printf("Graph is not initialized\n");
		return;
	}
	
	for (int i = 0; i < n; i++) {
		node *temp = graph[i].head;
		printf("[%d]: ", i);
		while (temp != NULL) {
			printf("%d --> ", temp->data);
			temp = temp->next;
		}
		printf("NULL\n");
	}
	
}



int isEulerPath(list *graph, int n) {
	
	int nbrOfOddNode = 0, count;
	
	for (int i = 0; i < n; i++) {
		node *temp = graph[i].head;
		count = 0;
		while (temp != NULL) {
			temp = temp->next;
			count++;
		}
		// is that node odd?
		if (count % 2 != 0) nbrOfOddNode++;
	}
	
	// accept the euler path
	if (nbrOfOddNode == 2) return 1;
	else return 0;
	
}


int isEulerCircuit(list *graph, int n) {
	
	int count = 0;
	for (int i = 0; i < n; i++) {
		node *temp = graph[i].head;
		while (temp != NULL) {
			temp = temp->next;
			count++;
		}
		// is that node not even?
		if (count % 2 != 0) return 0;
		count = 0;
	}
	
	// accept euler circuit
	return 1;
	
}





















