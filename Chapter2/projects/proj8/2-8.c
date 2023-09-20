#include <stdio.h>

int main(void)
{
    float loan = 0.0f;
    float interest_rate = 0.0f;
    float monthly_payment = 0.0f;

    printf("Enter amout of loan: ");
    scanf("%f", &loan);
    
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    float monthly_interest_rate = interest_rate / 12.0f;    

    float remaining_balance = loan;


    remaining_balance *= 1 + monthly_interest_rate / 100;
    remaining_balance -= monthly_payment;
    printf("\nBalance remaining after first payment:  %.2f", remaining_balance);

    remaining_balance *= 1 + monthly_interest_rate / 100;
    remaining_balance -= monthly_payment;
    printf("\nBalance remaining after second payment: %.2f", remaining_balance);
    
    remaining_balance *= 1 + monthly_interest_rate / 100;
    remaining_balance -= monthly_payment;
    printf("\nBalance remaining after third payment:  %.2f", remaining_balance);

    return 0;    
}