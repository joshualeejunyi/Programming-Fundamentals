#include <stdio.h>

int main() {
    int a[4] = {-1, 2, 10, 7};
    int b[4];
    for (int i = 0; i <4; i++) {
        b[i] = a[3 - i];
    }

    printf("");
    printf("a[3] == %d\n", a[3]);
    printf("b[3] == %d\n", b[3]);
    printf("b[a[1]] == %d\n", b[a[1]]);
}
