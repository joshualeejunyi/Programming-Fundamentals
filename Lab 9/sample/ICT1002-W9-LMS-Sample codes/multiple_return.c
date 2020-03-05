#include <stdio.h>

#define POSITIVE 1
#define NEGATIVE -1
#define ZERO     0

int get_sign(int n);

int main() {

    int n;
    int sign;

    printf("Type an integer: ");
    scanf("%d", &n);

    sign = get_sign(n);
    if (sign == POSITIVE)
        printf("That is a positive number.\n");
    else if (sign == NEGATIVE)
        printf("That is a negative number.\n");
    else
        printf("That is zero.\n");

    return 0;
}

int get_sign(int n) {

    if (n < 0)
        return NEGATIVE;
    if (n > 0)
        return POSITIVE;

    return ZERO;
}