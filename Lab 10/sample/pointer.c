/*
 * Pointer example.
 */
#include <stdio.h>

int main() {
	int y = 5;
	int *yPtr;
	
	yPtr = &y;
	printf("Address of y: %d\n", &y);
	printf("Value of yPtr: %d\n", yPtr);
	printf("Address of yPtr: %d\n", &yPtr);
	printf("Value to which yPtr points: %d\n", *yPtr);
	
	return 0;
}