/*
 * String conversion examples.
 */
#include <stdio.h>
#include <stdlib.h>

int main() {

	/* convert the string "123456789" to the long integer 123456789 */
	long l;
	l = atol("123456789");
	printf("%ld\n", l);

	return 0;
}
