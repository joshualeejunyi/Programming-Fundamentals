#include <stdio.h>
#include <ctype.h>
#include <string.h>

int answerCheck(char * answer, char * guess, int len);
void playerTwo (char * answer, char * guess, int len, int guesses);

int main() {
    char answer[13];
    char guess[13];
    // char *ansPtr = answer;
    // char *gPtr = guess;
    int len = 0, anscheck = 0, guesses = 7;

    // request player 1's input
    printf("Player 1, enter a answer of no more than 12 letters:\n");
    fgets(answer, 12, stdin);

    len = strlen(answer);
    anscheck = answerCheck(answer, guess, len);

    if (anscheck == 1) {
        // for (guesses; guesses > 0; guesses --) {
        playerTwo(answer, guess, len, guesses);
        // }
    } else {
        // TODO: loop and ask for only english letters
        printf("Sorry, the answer must contain only English letters.\n");
    }
}

void playerTwo (char * answer, char * guess, int len, int guesses) {
    char attempt[2];

    printf("Player 2 has so far guessed: ");
    for (int i=0; i<len-1; i++) {
        printf("%c ", *guess);
    }

    printf("\nPlayer 2, you have %d guesses remaining. Enter your next guess:\n", guesses);
    fgets(attempt, 2, stdin);

    for (int i=0; i<len; i++) {
        if (*answer == attempt[0]) {
            printf("answer: %c\n", *answer);
            printf("guess: %c\n", *guess);
        }
        printf("====\n");
        answer++;
        guess++;
    }

    printf("Player 2 has so far guessed: ");
    for (int i=0; i<len-1; i++) {
        printf("%c ", *guess);
    }
}

int answerCheck(char * answer, char * guess, int len) {
    for (int i=0; i<len; i++) {
        if (isupper(*answer)) {
            *answer = tolower(*answer);
        }
        if (ispunct(*answer) || isdigit(*answer)) {
            return -1;
        }
        answer++;
        *guess = '_';
    }
    return 1;
}