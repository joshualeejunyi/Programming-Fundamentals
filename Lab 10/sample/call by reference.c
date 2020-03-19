/*
 * Passing arrays to functions, use of const.
 */
#include <stdio.h>

/* cube a number in-place */
void cubeByReference(int *);

int main() {

	int number = 5;
	cubeByReference(&number);
	printf("number = %d\n", number);

	return 0;
}

void cubeByReference(int *ptr) {

	*ptr = (*ptr) * (*ptr) * (*ptr);

}
