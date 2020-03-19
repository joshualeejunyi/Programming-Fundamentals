/*
 * Swapping example
 */

#include <stdio.h>
 
/* swap pointers */
void swapPointer(int **a, int **b) {

	int *temp = *a;
	*a = *b;
	*b = temp;
	
}

/* swap values */
void swapValue(int *a, int *b) {

	int temp = *a;
	*a = *b;
	*b = temp;
	
}

int main() {

	int a = 5;
	int b = 6;
	int *ptrA = &a;
	int *ptrB = &b;
	
	printf("At the start:\n");
	printf("a = %d, b = %d\n", a, b);
	printf("ptrA = %p, ptrB = %p\n\n", ptrA, ptrB);
	
	/* test swapPointer() */
	ptrA = &a;
	ptrB = &b;
	swapPointer(&ptrA, &ptrB);
	printf("After swapPointer():\n");
	printf("a = %d, b = %d\n", a, b);
	printf("ptrA = %p, ptrB = %p\n\n", ptrA, ptrB);
	
	/* test swapValue() */
	ptrA = &a;
	ptrB = &b;
	swapValue(ptrA, ptrB);
	printf("After swapValue():\n");
	printf("a = %d, b = %d\n", a, b);
	printf("ptrA = %p, ptrB = %p\n\n", ptrA, ptrB);
	
	return 0;
	
}
	