#include <stdio.h>

#define PI 3.14f


int main(void)
{
    float radius = 0.0f;

    printf("Please input radius of sphere to calculate volume:\n");
    scanf("%f", &radius);


    float volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

    printf("A sphere with a radius of %f meters has a volume of %f cubic meters.\n", radius, volume);

    return 0;
}