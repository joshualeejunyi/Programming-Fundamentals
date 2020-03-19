/*
 * Read a list of grades with dynamic memory allocation.
 */
#include <stdio.h>
#include <stdlib.h>

int main() {

	int *grades;
	int num_students;
	int i;
	
	/* ask how many grades need to be stored */
	printf("How many students are in your class? ");
	scanf("%d", &num_students);
	
	/* allocate enough space to hold num_students integers */
	grades = (int *)malloc(num_students * sizeof(int));
	if (grades == NULL) {
		printf("Out of memory.");
		return 1;
	}
	
	/* read the grades */
	for (i = 0; i < num_students; i++) {
		printf("Grade for student %d: ", i + 1);
		scanf("%d", &grades[i]);
	}
	
	/* de-allocate memory */
	free(grades);
	
	return 0;
	
}