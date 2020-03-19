/*
 * Pointer example.
 */
#include <stdio.h>

int main() {
	int a = 5, b = 2;
    int *p = &a, *q = &b;

    *p *= 2;        //a = 10;
    *q  = *p - 1;   //b = 9;
    p  = &b;        //*p = 9;
    b  = *p + 3;    //b = 12;

    printf("the value of a is: %d\n", a);
    printf("the value of b is: %d\n", b);

	return 0;
}
