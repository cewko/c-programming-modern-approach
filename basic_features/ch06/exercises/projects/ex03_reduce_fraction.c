/* reduce a fraction to lowest terms using gcd */
#include <stdio.h>

int main(void) {
    int numerator, denominator, m, n, gcd, remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    m = numerator;
    n = denominator;

    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    gcd = m;

    numerator /= gcd;
    denominator /= gcd;

    printf("In lowest terms %d/%d\n", numerator, denominator);
    return 0;
}