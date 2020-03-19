/*
 * The name of the array evaluates to the address of the first element
 * of the array.
 */
 #include <stdio.h>

 int main() {

	char *suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    char *face[13] = {
        "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10",
        "Jack", "Queen", "King"
    };

    for (int i = 0; i < 4; i++) {
        char *card_suit = suit[i];
        for (int j = 0; j < 13; j++) {
            printf("%s of %s\n", face[j], card_suit);
        }
    }

	return 0;
}
