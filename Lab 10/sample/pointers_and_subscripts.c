/*
 * Subscripting and pointer arithmetic can be used interchangeably.
 */
#include <stdio.h>

int main() {
 
    char b[] = {'a', 'b', 'c', 'd', 'e' };
    char *bPtr = b;

    printf("*(bPtr + 3): \t%c\n", *(bPtr + 3));
    printf("*(b + 3): \t%c\n", *(b + 3));
    printf("bPtr[3]: \t%c\n", bPtr[3]);
	
	return 0;
}
