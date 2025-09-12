#include <stdio.h>

int main(void) {
    int amount, twenties, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    // calculate $20 bills
    twenties = amount / 20;
    amount = amount % 20;   // remaining amount after $20 bills

    tens = amount / 10;
    amount = amount % 10;

    fives = amount / 5;
    amount = amount % 5;

    // remaining amount of the number of $1 needed
    ones = amount;

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);

    return 0;
}