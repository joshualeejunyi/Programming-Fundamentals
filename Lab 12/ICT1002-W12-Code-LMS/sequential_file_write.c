/*
 * Sequential file writing example.
 */
#include <stdio.h>

int main() {

	FILE *f;
	int account;
	char name[20];
	double balance;
	
	/* open the file */
	f = fopen("credit.txt", "w");
	if (f == NULL) {
		printf("Could not open credit.txt.\n");
		return 1;
	}
	
	/* print instructions to the user */
	printf("Enter the account, name and balance for each customer.\n");
	printf("Enter account 0 to end input.\n");
	
	/* repeatedly prompt for input */
	printf("? ");
	scanf("%d", &account);
	while (account != 0) {
		scanf("%19s%lf", name, &balance);
	
		/* write this customer to the file */
		fprintf(f, "\n%d %s %.2f", account, name, balance);
		
		/* prompt for the next customer */
		printf("? ");
		scanf("%d", &account);
	}

	/* clean up */
	fclose(f);
	
	return 0;
	
}