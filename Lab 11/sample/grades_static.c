/*
 * Read a list of grades with static memory allocation.
 */
#include <stdio.h>

#define NUM_STUDENTS 10

int main() {

	int grades[NUM_STUDENTS];
	int i;
	
	for (i = 0; i < NUM_STUDENTS; i++) {
		printf("Grade for student %d: ", i + 1);
		scanf("%d", &grades[i]);
	}
	
	return 0;
	
}