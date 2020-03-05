/*
 * Array initialiser example.
 */
#include <stdio.h>

#define MAX_STUDENTS 10

int main() {

    int studentId[MAX_STUDENTS] =
        { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    printf("%7s%13s\n", "Element", "Value");
    for (int i = 0; i < MAX_STUDENTS; i++)
        printf("%7d%13d\n", i, studentId[i]);
	
    return 0;	
}
