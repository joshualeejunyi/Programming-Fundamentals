/*
 * Array example.
 */
#include <stdio.h>

#define MAX_STUDENTS 10

int main() {

	int studentId[MAX_STUDENTS];
	for (int i = 0; i < MAX_STUDENTS; i++)
		studentId[i] = i + 1;
	
	printf("%7s%13s\n", "Element", "Value");
	for (int i = 0; i < MAX_STUDENTS; i++)
		printf("%7d%13d\n", i, studentId[i]);
	
	return 0;	
}