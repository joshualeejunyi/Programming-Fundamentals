/*
 * Sequential file reading example.
 */
#include <stdio.h>

int main() {

	FILE *f;
	int account;
	char name[20];
	double balance;
	
	/* open the file */
	f = fopen("credit.txt", "r");
	if (f == NULL) {
		printf("Could not open credit.txt.\n");
		return 1;
	}
	
	/* read until the end of the file */
	printf("%10s\t%20s\t%10s\n", "Account", "Name", "Balance");
	while (!feof(f)) {
	
		/* read one record */
		fscanf(f, "%d%19s%lf", &account, name, &balance);
		
		/* display it to the screen */
		printf("%10d\t%20s\t%10.2lf\n", account, name, balance);
		
	}
	
	/* clean up */
	fclose(f);
	
	return 0;
	
}