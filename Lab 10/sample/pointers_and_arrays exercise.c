/*
 * Pointers and arrays example.
 */
#include <stdio.h>

int main() {

	int a[] = { 1, -1, 4, 5, 4, -3 };

    int *p = a + 5;
    printf("content in array a:\t\t%d  %d  %d  %d  %d  %d\n", a[0], a[1], a[2], a[3], a[4], a[5]);
    printf("*P after *p = a + 5:\t\t%18d\n\n", *p);

    *p = -(*p);
    printf("content in array a:\t\t%d  %d  %d  %d  %d  %d\n", a[0], a[1], a[2], a[3], a[4], a[5]);
    printf("*P after *p = -(*p):\t\t%17d\n\n", *p);

    p -= 2;
    printf("content in array a:\t\t%d  %d  %d  %d  %d  %d\n", a[0], a[1], a[2], a[3], a[4], a[5]);
    printf("*P after p -= 2:\t\t%11d\n\n", *p);

    *p = *p + 1;
    printf("content in array a:\t\t%d  %d  %d  %d  %d  %d\n", a[0], a[1], a[2], a[3], a[4], a[5]);
    printf("*P after *p = *p + 1:\t\t%11d\n\n", *p);

    *(p + 1) = *p * 2;
    printf("content in array a:\t\t%d  %d  %d  %d  %d  %d\n", a[0], a[1], a[2], a[3], a[4], a[5]);
    printf("*P after *(p + 1) = *p * 2:\t%11d\n", *p);

	return 0;

}
