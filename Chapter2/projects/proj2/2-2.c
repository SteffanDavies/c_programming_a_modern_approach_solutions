#include <stdio.h>

#define PI 3.14f


int main(void)
{
    int radius = 10;
    float volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

    printf("A sphere with a radius of 10 meters has a volume of %f cubic meters.\n", volume);

    return 0;
}