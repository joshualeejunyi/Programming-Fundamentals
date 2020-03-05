/*
 * puts() and getchar() example.
 */
#include <stdio.h>

#define MAX_LENGTH 80

int main() {

	char sentence[MAX_LENGTH];
	char c;
	int index = 0;
	puts("Enter a line of text: ");
	while ((c = getchar()) != '\n' && index < MAX_LENGTH - 1)
		sentence[index++] = c;
	sentence[index] = '\0';
	puts("The input line was: ");
	puts(sentence);
	
	return 0;
	
}