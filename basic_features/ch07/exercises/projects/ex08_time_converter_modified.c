#include <stdio.h>
#include <ctype.h>

int main(void) {
    int hours, minutes;
    char am_pm;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    while ((am_pm = getchar()) == ' ' || am_pm == '\t');
        ;

    am_pm = toupper(am_pm);

    if (am_pm == 'P' && hours != 12)
        hours += 12;
    else if (am_pm == 'A' && hours == 12)
        hours = 0;

    printf("Equivalent 24-hour time: %02d:%02d\n", hours, minutes);

    return 0;
}