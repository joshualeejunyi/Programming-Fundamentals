#include <stdio.h>

int main() {
    int a = -1, b = 2;
    float x = 0.1;
    float y = 1.5;
    char c = 'p';

    printf("a/b = %d\n", a/b);
    printf("a*b = %d\n", a*b);
    printf("(b*3)%%4 = %d\n", ((b*3)%4));
    printf("x*a = %f\n", x*a);
    printf("x*y = %f\n", x*y);
    printf("y/x = %f\n", y/x);
    printf("c-3 = %d\n", c-3);
}