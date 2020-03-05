#include <stdio.h>

int iabs(int);

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);
    printf("%d\n", iabs(x));

    return 0;
}

int iabs(int n)
{
    /* to be implemented */
    if (n < 0)
        return -n;
    else
        return n;
}
