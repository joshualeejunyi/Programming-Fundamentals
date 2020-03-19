#include <stdio.h>

void acopy(int *dest , const int *src, int n);
int acmp(const int *a1, const int *a2, int n);

int main() {
    int list[6] = {1,2,3,4,5,6};
    int secondlist[6] = {1,2,3,4,5,6};
    int *src = list;
    int newlist[6];
    int *dest = newlist;
    int n = 6;
    int result = 0;
    int *slist = secondlist;

    acopy(dest, src, n);
    result = acmp(src, slist, n);

    if (result == 0) {
        printf("Not the same.\n");
    } else {
        printf("They are the same.\n");
    }
}

void acopy(int *dest , const int *src, int n) {
    for (int i=0; i<n; i++) {
        dest[i] = src[i];
    }

    for (int i=0; i<n; i++) {
        printf("%d", *dest);
        dest++;
    }
    printf("\n");
}

int acmp(const int *a1, const int *a2, int n) {
    int count = 0;
    for (int i=0; i<n; i++) {
        if (a1[i] == a2[i]) {
            count++;
        }
        if (count == n) {
            return 1;
        }
    }

    return 0;
}
