//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>

int main() {
    float principal,rate,time;
    float simple_interest,compound_interest;
    float total_amount;
    int i;

    printf("Enter Principal amount: ");
    scanf("%f",&principal);

    printf("Enter Annual Rate of interest (in %%): ");
    scanf("%f",&rate);

    printf("Enter Time period (in whole years): ");
    scanf("%f",&time);

    simple_interest=(principal*rate*time)/100;

    total_amount=principal;
    for (i=1;i<=(int)time;i++)
    {
        total_amount=total_amount*(1+rate/100);
    }
    compound_interest=total_amount-principal;

    printf("Simple Interest=%.2f\n",simple_interest);
    printf("Compound Interest=%.2f\n",compound_interest);

    return 0;
}