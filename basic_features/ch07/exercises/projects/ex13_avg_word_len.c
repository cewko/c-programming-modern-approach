/* average word length in a sentence */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    char ch;
    int word_count = 0, letter_count = 0;
    bool in_word = false;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {
        if (ch == ' ') {
            if (in_word) {
                word_count++;
                in_word = false;
            }
        } else {
            letter_count++;
            in_word = true;
        }
    }

    if (in_word)
        word_count++;

    printf("Average word length: %.1f\n", (float) letter_count / word_count);
    return 0;
}