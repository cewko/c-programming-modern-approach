#include <stdio.h>

int main(void) {
    float number, largest = 0.0f;

    printf("Enter a number: ");
    scanf("%f", &number);
    largest = number;

    while (number > 0) {
        if (number > largest)
            largest = number;
        printf("Enter a number: ");
        scanf("%f", &number);
    }

    printf("The largest number entered was %.2f\n", largest);

    return 0;
}