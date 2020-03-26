/*
 * Read records from a file, displaying only the ones of interest.
 */
#include <stdio.h>

/* TO DO: insert function prototypes here */


int main() {

	/* print the instructions */
	printf("Enter request:\n");
	printf("1 - List accounts with zero balances\n");
	printf("2 - List accounts with credit balances\n");
	printf("3 - List accounts with debit balances\n");
	printf("4 - Exit\n");
	
	int opt;
	do {
	
		/* get the menu option from the user */
		printf("? ");
		scanf("%d", &opt);
		
		/* TO DO: decide what to do */
		switch (opt) {
			case 1:
				/* TO DO: display the accounts with zero balances */
				printf("Accounts with zero balances:\n");
				break;
				
			case 2:
				/* TO DO: display the accounts with credit balances */
				printf("Accounts with credit balances:\n");
				break;
				
			case 3:
				/* TO DO: display the accounts with debit balances */
				printf("Accounts with debit balances:\n");
				break;
				
			case 4:
				/* exit */
				printf("Goodbye.\n");
				break;
				
			default:
				/* invalid input */
				printf("Please enter 1-4.\n");
				break;
				
		}
		
	} while (opt != 4);
	
}
	