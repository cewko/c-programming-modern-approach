#include <stdio.h>

int main(void) {
    int number, first_digit, second_digit, third_digit;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    first_digit = number / 100;
    second_digit = (number / 10) % 10;
    third_digit = number % 10;

    printf("The revesal is: %d%d%d\n", third_digit, second_digit, first_digit);

    return 0;
}