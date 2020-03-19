/*
 * Read a list of names with dynamic memory allocation.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 256

int main() {

	char buf[MAX_NAME];
	char **names;
	int num_students;
	int length;
	int i;
	
	/* ask how many names need to be stored */
	printf("How many students are in your class? ");
	scanf("%d", &num_students);
	
	/* read to the end of the line */
	fgets(buf, MAX_NAME, stdin);
	
	/* allocate enough space to hold num_students strings */
	names = (char **)malloc(num_students * sizeof(char *));
	if (names == NULL) {
		printf("Out of memory.");
		return 1;
	}
	
	for (i = 0; i < num_students; i++) {
		/* read the name */
		printf("Name of student %d: ", i + 1);
		fgets(buf, MAX_NAME, stdin);
		
		/* copy the name into the array */
		length = strchr(buf, '\n') - buf;
		names[i] = (char *)calloc(length + 1, sizeof(char));
		if (names[i] == NULL) {
			printf("Out of memory.");
			return 1;
		}
		strncpy(names[i], buf, length);
	}
	
	/* print allof the names */
	printf("Here is the class list:\n");
	for (i = 0; i < num_students; i++)
		printf("  %s\n", names[i]);
	
	/* de-allocate memory */
	for (i = 0; i < num_students; i++)
		free(names[i]);
	free(names);
	
	return 0;
	
}