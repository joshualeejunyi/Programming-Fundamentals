#include <stdio.h>

int main() {
    int n = 5;
    printf("n = %d\n", n);
    printf("address of n = %p\n", &n);
    int *ptr = &n;
    printf("address of ptr = %p\n", &ptr);
    printf("value in ptr (address of n) = %p\n", ptr);
    printf("value in ptr in ptr (value of n) = %d\n", *ptr);
    printf("===============\n");
    int **ptrptr = &ptr;
    printf("address of ptrptr = %p\n", &ptrptr);
    printf("value in ptrptr (address of ptr) = %p\n", ptrptr);
    printf("value in ptr in ptrptr (address of n) = %p\n", *ptrptr);
    printf("value in ptr in ptr in ptrptr (value of n) = %d\n", **ptrptr);

    printf("===============\n");
    int ***ptrptrptr = &ptrptr;
    printf("address of ptrptrptr = %p\n", &ptrptrptr);
    printf("value in ptrptrptr (address of ptrptr) = %p\n", ptrptrptr);
    printf("value in ptrptr in ptrptrptr (address of ptr) = %p\n", *ptrptrptr);
    printf("value in ptr in ptrptr in ptrptrptr (address of n) = %p\n", **ptrptrptr);
    printf("value in ptr in ptr  in ptrptr in ptrptrptr (value of n) = %d\n", ***ptrptrptr);
}