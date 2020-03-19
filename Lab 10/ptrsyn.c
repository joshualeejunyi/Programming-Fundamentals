#include <stdio.h>

int main() {
    int *zPtr; /* zPtr will reference array z */
    int *aPtr = NULL;
    void *sPtr = NULL;
    int number, i;

    int z[5] = {1,2,3,4,5};
    zPtr = z;
    sPtr = z;

    number = *zPtr;
    printf("%d\n", number);

    number = *zPtr + 2;
    printf("%d\n", number);

    for (int i=0; i <=4; i++) {
        printf("%d", zPtr[i]);
    }
    printf("\n");

}