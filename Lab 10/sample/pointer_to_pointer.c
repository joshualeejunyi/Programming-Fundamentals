/*
 * Pointers to pointers example.
 */
#include <stdio.h>

int main() {

	int n = 5;
	int *ptr = &n;
	int **ptrToPtr = &ptr;

	/* illustrating the address operator & */
	printf("&n = %d\n", &n);
	printf("ptr = %d\n", ptr);
	printf("&ptr = %d\n", &ptr);
	printf("ptrToPtr = %d\n\n", ptrToPtr);

	/* illustrating the dereferencing operator * */
	printf("*ptr = %d\n", *ptr);
	printf("*ptrToPtr = %d\n", *ptrToPtr);
	printf("ptr = %d\n", ptr);
	printf("**ptrToPtr = %d\n", **ptrToPtr);

	return 0;

}
