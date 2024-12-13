#ifndef BRIDGES
#define BRIDGES


	typedef struct node {
		int data;
		int weight;
		struct node* next;
	} node;

	typedef struct list {
		struct node *head;
	} list;
	
	
	void display_graph(list *graph, int n);
	void add_node(int s, int d, list **graph);
	list *init_graph(int n);
	
	
	
	




#endif
