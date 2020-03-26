#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define WORD_SIZE 14
#define GUESSES 7

int keywordcheck(char * keyword, int len);
void attemptdisplay(char * attempt, char * buff, char * keyword, int len, int * guess, int * points);

int main() {
    char keyword[WORD_SIZE]; // player 1's word
    char attempt[2 * WORD_SIZE];
    char buff[3] = {0};
    int len = 0, guess = 0, points = 0;

    while (1) {
        // request player 1's input
        printf("Player 1, enter a word of no more than 12 letters:\n");
        fgets(keyword, WORD_SIZE, stdin);
        len = strlen(keyword);

        if (keywordcheck(keyword, len) == 1) {
            printf("Sorry, the word must contain only English letters.\n");
        } else {
            break;
        }
    }

    attemptdisplay(attempt, buff, keyword, len, &guess, &points);
    while(guess < GUESSES) {
        printf("Player 2 has so far guessed: %s\n", attempt);
        printf("Player 2, you have %d guesses remaining. Enter your next guess:\n", GUESSES - guess);
        fgets(buff, 3, stdin);
        attemptdisplay(attempt, buff, keyword, len, &guess, &points);

        if (points == len - 1) {
            printf("Player 2 has so far guessed: %s\n", attempt);
            printf("Player 2 wins.\n");
            return 0;
        }
    }

    printf("No attempts left.\n");
    printf("The word was %s", keyword);
    printf("Player 1 wins.\n");

    return 1;
}

int keywordcheck(char * keyword, int len) {
    for (int i=0; i<len-1; i++) {
        if (isdigit(keyword[i]) || ispunct(keyword[i]) || isspace(keyword[i])) {
            return 1; // 1 for negative output
        } else {
            keyword[i] = tolower(keyword[i]);
        }
    }
    return 0;
}

void attemptdisplay(char * attempt, char * buff, char * keyword, int len, int * guess, int * points) {
    if (buff[0] == 0) {
        for (int i=0; i<len-1; i++) {
            *attempt = '_';
            attempt++;
            *attempt = ' ';
            attempt++;
        }
        *attempt = '\0';
    } else {
        for (int i=0; i<len-1; i++) {
            if (*keyword == buff[0]) {
                *attempt = buff[0];
                attempt++;
                *attempt = ' ';
                attempt++;
                keyword++;
                *points = *points + 1;
                *guess = *guess - 1;
            } else {
                attempt = attempt + 2;
                keyword++;
            }
        }
        *attempt = '\0';
        *guess = *guess + 1;
    }
}