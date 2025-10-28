#include <stdio.h>

int main(void) {
    int n;
    long double factorial = 1.0L;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d: %Lg\n", n, factorial);

    return 0;
}