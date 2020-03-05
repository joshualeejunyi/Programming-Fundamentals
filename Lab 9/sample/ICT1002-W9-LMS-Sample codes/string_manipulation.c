/*
 * String manipulation example.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_FULLNAME  80
#define MAX_USERNAME  9
#define RANDOM_DIGITS 3

int main() {

	char name[MAX_FULLNAME];
	char userID[MAX_USERNAME];
	int  n, i;

	printf("Enter your name: ");
	scanf("%79s", name);
	strncpy(userID, name, MAX_USERNAME - RANDOM_DIGITS - 1);
	userID[MAX_USERNAME - RANDOM_DIGITS - 1] = '\0';

	n = strlen(userID);
	for (i = 0; i < RANDOM_DIGITS; i++)
		userID[n + i] = '0' + rand() % 10;
	userID[n + RANDOM_DIGITS] = '\0';
	printf("Your username is: %s\n", userID);

	return 0;

}
