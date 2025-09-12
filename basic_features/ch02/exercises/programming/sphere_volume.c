#include <stdio.h>
#include <math.h>

int main(void) {
    int radius = 10;
    float volume;

    volume = 4.0f / 3.0f * M_PI * pow(radius, 3);

    printf("Volume: %.2f\n", volume);
    return 0;
}