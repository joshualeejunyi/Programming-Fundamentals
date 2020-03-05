#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char query[255];
    char pattern[255];
    char cs[2]; // case sensitive option
    int point, count, match, foundat = 0;

    printf("Enter text of up to 255 characters:\n");
    fgets(query, 255, stdin);

    printf("Enter pattern (string) of up to 255 characters:\n");
    fgets(pattern, 255, stdin);

    printf("Case-sensitive? [y\\N]\n");
    fgets(cs, 2, stdin);

    for (int i=0; i < strlen(query); i++) {
        if (match == 1) {
            break;
        }
        point = i;
        for (int j=0; j < (strlen(pattern) - 1); j++) {
            char qchar = query[point];
            char patchar = pattern[j];
            if (tolower(cs[0]) == 'n') {
                qchar = tolower(qchar);
                patchar = tolower(patchar);
            }
            if (patchar == '.') {
                count++;
                point++;
            } else if (patchar == '_') {
                if (isspace(qchar)) {
                    count++;
                    point++;
                }
            } else {
                if (patchar == qchar) {
                    point++;
                    count++;
                } else {
                    count = 0;
                    point = 0;
                    break;
                }
            }
            if (count == strlen(pattern)-1) {
                match = 1;
                foundat = i;
            }
        }
    }
    if (match == 1) {
        printf("pattern found.\n");
        printf("Matches at %d\n", foundat);
    } else {
        printf("No matches found.\n");
    }
    return 0;
}