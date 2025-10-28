/* evaluate an expression entered by a user */

#include <stdio.h>

int main(void) {
    float result, operand;
    char operator;

    printf("Enter an expression: ");
    scanf("%f", &result);

    while ((operator = getchar()) != '\n') {
        if (operator == ' ')
            continue;

        scanf("%f", &operand);

        switch (operator) {
            case '+':
                result += operand;
                break;
            case '-':
                result -= operand;
                break;
            case '*':
                result *= operand;
                break;
            case '/':
                result /= operand;
                break;
        }
    }

    printf("Value of expression: %.1f\n", result);
    return 0;
}