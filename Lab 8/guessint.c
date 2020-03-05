#include <stdio.h>
#define GUESSES 10
#define START_NUM 1
#define END_NUM 1000

int main() {
    int answer = 0, guesscount = 0, guess = 0;

    while (1) {
        // request player 1's input
        printf("Player 1, enter a number between %d and %d:\n", START_NUM, END_NUM);
        scanf("%d", &answer);
        if (answer >= START_NUM && answer <= END_NUM) {
            // if the input value is within range, break loop to start game
            break;
        } else {
            printf("That number is out of range.\n");
        }
    }

    // loop while the number of attempts is less than the limit
    while (guesscount < GUESSES) {
        // return the attempts left by deducting guesses by guesscount
        printf("Player 2, you have %d guesses remaining.\n", (GUESSES - guesscount)); 
        printf("Enter your guess:\n");
        scanf("%d", &guess);

        if (guess == answer) {
            // if the guess is equivalent to the answer, player 2 wins and return to end game
            printf("Player 2 wins.\n");
            return 0;
        } else if (guess < answer) {
            // if guess is lesser than answer, print too low
            printf("Too low.\n");
        } else {
            // if guess is not lesser or equal (else) than the answer, print too high
            printf("Too high.\n");
        }

        guesscount++; // increment guesscounter
    }

    printf("Player 1 wins.\n"); //if broken out of the loop without a win, player 1 wins.
}