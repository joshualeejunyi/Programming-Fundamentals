#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LENGTH 34

struct word_node {
    char entry[WORD_LENGTH];
    struct word_node * next;
};

typedef struct word_node Word;
typedef Word * WordPtr;

void linkyboi(char * word);

int main() {
    while(1) {
        char buff[WORD_LENGTH];
        printf("Please enter a word: ");
        fgets(buff, WORD_LENGTH, stdin);

        if (strcmp("***\n", buff) == 0) {
            WordPtr head = (WordPtr) malloc(sizeof(Word));

            

        } else {
            printf("%s\n", buff);
        }
    }
}

void linkyboi(char * word) {
    
}