/*
 * String reversal exercise.
 */
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 80

/* print the characters of a string in reverse order */
void print_reverse(const char[]);

int main() {

	char sentence[MAX_LENGTH];
	printf("Enter a line of text:\n");
	fgets(sentence, MAX_LENGTH, stdin);
	printf("The input line written backwards:\n");
	print_reverse(sentence);
	
	return 0;
	
}


/* this function is to be implemented */
void print_reverse(const char str[]) {

	int i;
	for (i = strlen(str) - 1; i >= 0; i--)
		putchar(str[i]);

}