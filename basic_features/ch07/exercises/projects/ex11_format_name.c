/* format name as last name, first initial */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch, initial;

    printf("Enter a first and last name: ");

    // skip leading spaces
    while ((ch = getchar()) == ' ')
        ;

    initial = ch;

    // skip rest of first name
    while ((ch = getchar()) != ' ')
        ;

    // skip spaces between names
    while ((ch = getchar()) == ' ')
        ;

    putchar(ch);
    while ((ch = getchar()) != '\n' && ch != ' ')
        putchar(ch);

    printf(", %c.\n", initial);
    return 0;
}