#include <stdio.h>

int main(void) {
    int square[4][4];
    int i, j;
    int row_sum, column_sum;
    int diag1 = 0, diag2 = 0;

    printf("Enter the numbers from 1 to 16 in any order: \n");

    // read 16 numbers into the array
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &square[i][j]);
        }
    }

    printf("\n");

    // print the square
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%2d ", square[i][j]);
        }
        printf("\n");
    }

    // compute and print row sums
    printf("Column sums: ");
    for (i = 0; i < 4; i++) {
        row_sum = 0;
        for (j = 0; j < 4; j++) {
            row_sum += square[i][j];
        }
        printf("%d ", row_sum);
    }

    printf("\n");

    // compute and print column sums
    printf("Column sums: ");
    for (j = 0; j < 4; j++) {
        column_sum = 0;
        for (i = 0; i < 4; i++) {
            column_sum += square[i][j];
        }
        printf("%d ", column_sum);
    }

    printf("\n");

    for (i = 0; i < 4; i++) {
        diag1 += square[i][i];
        diag2 += square[i][3 - i];
    }
    printf("Diagonal sums: %d %d\n", diag1, diag2);

    return 0;
}