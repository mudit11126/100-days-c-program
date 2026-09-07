//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float cost_price, selling_price;
    float profit, loss, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &cost_price);

    printf("Enter Selling Price: ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        percentage = (profit / cost_price) * 100;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percentage);
    } 
    else if (cost_price > selling_price) {
        loss = cost_price - selling_price;
        percentage = (loss / cost_price) * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}