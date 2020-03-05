/*
 * Call-by-value example.
 */
#include <stdio.h>

void call_by_value(int);

int main() {

	int a = 10;
	
	printf("Before call_by_value, a = %d.\n", a);
	call_by_value(a);
	printf("After call_by_value, a = %d.\n", a);
	
	return 0;
}

/* this function will make a copy of a */
void call_by_value(int x) {

	printf("Inside call_by_value, x = %d.\n", x);
	x += 10;
	printf("After adding ten, x = %d.\n", x);
}