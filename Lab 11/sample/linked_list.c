/*
 * Linked list example.
 */
#include <stdio.h>

/* the structure of a node */
typedef struct node_struct {
	int data;
	struct node_struct *next;
} Node;


int main() {

	/* declare two nodes and link them */
	Node node1 = { 15, NULL };
	Node node2 = { 10, NULL };
	node1.next = &node2;
	
	/* printing out the data of a node */
	printf("node1.data = %d\n", node1.data);
	printf("node1.next = %p\n", node1.next);
	
	/* using a pointer to traverse the list */
	Node *node_ptr = &node1;
	printf("node1.data = %d\n", node_ptr->data);
	node_ptr = node_ptr->next;
	printf("node2.data = %d\n", node_ptr->data);
	
}