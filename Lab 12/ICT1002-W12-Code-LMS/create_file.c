/*
 * Creating a file.
 */
#include <stdio.h>

int main() {

	/* declare a pointer to a FILE structure */
	FILE *f;

	/* open the file with fopen() */
	f = fopen("data.txt", "w");
	if (f == NULL) {
		printf("Could not open data.txt.\n");
		return 1;
	}

	/* write to the file with fprintf() */
	fprintf(f, "Hi, this is ICT1002.\n");

	/* close the file with fclose() */
	fclose(f);

	return 0;

}
