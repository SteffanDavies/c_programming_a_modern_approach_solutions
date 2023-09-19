#include <stdio.h>

int main(void)
{
    float amount = 0.0f;

    printf("Enter an amount: ");
    scanf("%f", &amount);
    
    printf("\nWith tax added: %.2f", amount * 1.05);
    
    return 0;
}