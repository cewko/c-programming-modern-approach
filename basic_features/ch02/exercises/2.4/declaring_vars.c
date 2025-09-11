#include <stdio.h>

int main(void) {
    int integer_value;
    float float_value;

    printf("%d %f\n", integer_value, float_value);

    return 0;
}

/*
    the values are random "garbage".
    these are whatever happened to be in memory at those locations.
    they will differ between program runs.
*/