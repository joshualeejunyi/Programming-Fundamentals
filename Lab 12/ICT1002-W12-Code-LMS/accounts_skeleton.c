/*
 * Manipulate records using a linked list.
 */
#include <stdio.h>
#include <stdlib.h>

/* the structure of a client record */
typedef struct client_struct {
    int acc_num;
    char last_name[15];
    char first_name[10];
    double balance;
} Client;

/* the structure of a linked list node */
typedef struct node_struct {
	Client data;
	struct node_struct *next;
} Node;

/* some utility functions */
Node *allocate_client_node(Client *client);
void print_client_header();
void print_client(Client *client);

/* linked list operations - to be implemented below */
Node *delete_node(Node *head, Node *old_node);
void destroy_list(Node *head);
Node *insert_at_head(Node *head, Node *new_node);
Node *search_list(Node *head, int target);

/* file operations - to be implemented below */
Node *read_client_data(const char *filename, Node *head);
void write_client_data(const char *filename, Node *head);


/*
 * Main program. Repeatedly prints a menu and asks the user for
 * an action to perform.
 */
int main() {

	Node *head = NULL;	/* the head of the linked list of data */
	char filename[256];	/* the filename from which to read/write data */
	Client client;		/* for reading client data from the user */
	int acc_num;		/* the account number to be operated on */
	Node *node; 		/* the node to be operated on */
	int opt;			/* the option select by the user */
	
	
	do {
	
		/* print the menu */
		printf("Enter your choice:\n");
		printf(" 1. Insert a client into the list.\n");
		printf(" 2. Delete a client from the list.\n");
		printf(" 3. Search for a client.\n");
		printf(" 4. Print the list of clients.\n");
		printf(" 5. Read data from disk.\n");
		printf(" 6. Write data to disk.\n");
		printf(" 0. Exit.\n");
		
		/* get the selection from the user */
		printf("? ");
		scanf("%d", &opt);
		switch (opt) {
			case 1:
				/* read the data for this record */
				printf("Enter an account number, last name, first name and balance.\n? ");
				scanf("%d%14s%9s%lf", &client.acc_num, client.last_name, client.first_name, &client.balance);
				
				/* create a new node and insert it into the list */
				node = allocate_client_node(&client);
				head = insert_at_head(head, node);
				break;
				
			case 2:
				/* get the account number to be deleted */
				printf("Enter the account number to be deleted.\n? ");
				scanf("%d", &acc_num);
				
				/* find its node in the list, and delete it if it exists */
				node = search_list(head, acc_num);
				if (node != NULL)
					head = delete_node(head, node);
				break;
				
			case 3:
				/* get the account number to be displayed */
				printf("Enter the account number to be displayed.\n? ");
				scanf("%d", &acc_num);
				
				/* find its node in the list */
				node = search_list(head, acc_num);
				if (node != NULL) {
					print_client_header();
					print_client(&node->data);
				}
				break;
				
			case 4:
				/* print every client in the list */
				print_client_header();
				node = head;
				while (node != NULL) {
					print_client(&node->data);
					node = node->next;
				}
				break;
				
			case 5:
				/* get the filename from which to read the clients */
				printf("Enter the name of the file to read.\n? ");
				scanf("%255s", filename);
				
				/* read the file */
				head = read_client_data(filename, head);
				break;
				
			case 6:
				/* get the filename to which to write the clients */
				printf("Enter the name of the file to write.\n? ");
				scanf("%255s", filename);
				
				/* write the file */
				write_client_data(filename, head);
				break;
				
			case 0:
				printf("Goodbye.\n");
				break;
				
			default:
				printf("Please select an option 0-6.\n");
				
		}
		
	} while (opt != 0);
	
	/* clean up */
	destroy_list(head);
	
	return 0;
	
}


/*
 * Allocate a new linked list node containing the given client data. This node
 * should be de-allocated using free() when it is no longer required.
 *
 * Returns a pointer to the node, or NULL if there was a memory allocation failure.
 */
Node *allocate_client_node(Client *client) {
	
	Node *node = (Node *)malloc(sizeof(Node));
	if (node != NULL) {
		memcpy(&node->data, client, sizeof(Client));
		node->next = NULL;
	}
	
	return node;
	
}


/*
 * Print the header for a list of clients.
 */
void print_client_header() {
	
	printf("%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance");
	
}


/*
 * Print a client's data on a single line.
 */
void print_client(Client *client) {
	
	printf("%-6d%-16s%-11s%10.2lf\n", client->acc_num, client->last_name, client->first_name, client->balance);
	
}


/*
 * Delete old_node from the list with the given head node.
 *
 * Returns the new head node.
 */
Node *delete_node(Node *head, Node *old_node) {

	/* TO DO */
	
	return head;
	
}


/*
 * De-allocate the memory used by the list with the given head node.
 */
void destroy_list(Node *head) {
	
	/* TO DO */
	
}


/*
 * Insert a node at the head of the list.
 *
 * Returns the new head node.
 */
Node *insert_at_head(Node *head, Node *new_node) {
	
	/* TO DO */
	
	return head;
	
}


/*
 * Find the node with a given account number in the list with the given head
 * node.
 * 
 * Returns the first node containing the account with that number, or NULL if
 * there is no account with this number.
 */
Node *search_list(Node *head, int target) {
	
	/* TO DO */
	
	return NULL;

}


/*
 * Read clients from the file with the given name, adding them to the
 * beginning of the list with the given head node.
 *
 * Returns the new head node.
 */
Node *read_client_data(const char *filename, Node *head) {
	
	/* TO DO */
	
	return head;
	
}


/*
 * Write clients in the list with the given head node to the file with the
 * given name.
 */
void write_client_data(const char *filename, Node *head) {
	
	/* TO DO */
	
}