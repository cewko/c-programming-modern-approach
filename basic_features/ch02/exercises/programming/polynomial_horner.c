#include <stdio.h>

int main(void) {
    float x, result;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    // Evaluate polynomial using Horner's Rule:
    // 3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6
    // = ((((3x + 2)x - 5)x - 1)x + 7)x - 6

    result = 3 * x + 2;
    result = result * x - 5;
    result = result * x - 1;
    result = result * x + 7;
    result = result * x - 6;

    printf("Polynomial (Horner's Rule) for x (%.2f) = %.2f: \n", x, result); 
    return 0;
}