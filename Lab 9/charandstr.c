#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char buff[255];
    char *magic = "magic";

    printf("Enter a sentence, up to 255 characters:\n");
    fgets(buff, 255, stdin);

    int count = 0;

    for (int i=0; i < strlen(buff); i++) {
        char *word;

        if (ispunct(buff[i]) || isspace(buff[i])) {
            word[count] = '\0';
            if (strlen(word) > 0) {
                printf("%s\t%d\n", word, count);
                if (strcmp(word, magic) == 0) {
                    printf("You have found the magic word!\n");
                }
            }
            count = 0;
        } else {
            word[count] = buff[i];
            count++;
        }
    }
}