#include <stdio.h>

#define PI 3.14f

int main(void) {
    int radius, radius_pow;
    float volume;

    printf("Enter radius: ");
    scanf("%d", &radius);

    radius_pow = radius * radius * radius;
    volume = 4.0f / 3.0f * PI * radius_pow;

    printf("Volume: %.2f\n", volume);
    return 0;
}