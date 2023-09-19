#include <stdio.h>

int main(void)
{
    float x = 0.0f;

    printf("Expression: 3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6\n");
    printf("Enter value for x: ");
    scanf("%f", &x);
    
    float x5 = x*x*x*x*x;
    float x4 = x*x*x*x;
    float x3 = x*x*x;
    float x2 = x*x;
    

    float result = 3*x5 + 2*x4 - 5*x3 - x2 + 7*x - 6;

    printf("\nThe result is: %f", result); 

    return 0;
}