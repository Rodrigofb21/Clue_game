/*

Basic sketch of a clue game


*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char player1[] = "Mr. Plum";
    char player2[] = "General Green";
    char player3[] = "Mrs. Peacock";
    char player4[] = "Reverend Yellow";

    char weapon1[] = "Knife";
    char weapon2[] = "Wrench";
    char weapon3[] = "Rope";
    char weapon4[] = "Candlestick";

    char room1[] = "Ballroom";
    char room2[] = "Study Room";
    char room3[] = "Conservatory";
    char room4[] = "Billiard Room";

    printf("-- Welcome to C-Clue --\n");
    printf("  Choose your player:\n");
    printf(
        "1. Mr Plum\n2. General Green\n3. Mrs. Peacock\n4. Reverend Yellow\n"
    );
    scanf("%d\n", ">");

    return 0;
};
