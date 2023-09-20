#include <stdio.h>

int main(void)
{
    float x = 0.0f;

    printf("Expression: 3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6\n");
    printf("Enter value for x: ");
    scanf("%f", &x);

    float result = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;

    printf("\nThe result is: %f", result); 

    return 0;
}