#include <stdio.h>

int main(void)
{
    float amount = 0.0f;
    printf("Enter a dollar amount: ");
    scanf("%f", &amount);

    float remaining = amount;

    int bills_20 = remaining / 20;
    remaining -= (bills_20*20);

    int bills_10 = remaining / 10;
    remaining -= (bills_10*10);

    int bills_5 = remaining / 5;
    remaining -= (bills_5*5);
    
    int bills_1 = remaining / 1;
    remaining -= (bills_1*1);
    
    
    printf("$20 bills: %d\n", bills_20);
    printf("$10 bills: %d\n", bills_10);
    printf(" $5 bills: %d\n", bills_5);
    printf(" $1 bills: %d\n", bills_1);
    printf("Reamaining: $%.2f", remaining);

    return 0;
}