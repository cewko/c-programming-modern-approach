#include <stdio.h>

int main(void) {
    int hours, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    printf("Equivalent 12-hour time: ");

    if (hours == 0) {
        printf("12:%02d AM\n", minutes);
    }
    else if (hours < 12) {
        printf("%d:%02d AM\n", hours, minutes);
    }
    else if (hours == 12) {
        printf("12:%02d PM\n", minutes);
    }
    else {
        printf("%d:%02d PM\n", hours - 12, minutes);
    }

    return 0;
}