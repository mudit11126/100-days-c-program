//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    double num1, num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("\n--- Results ---\n");
    printf("Sum:        %.2lf\n", num1 + num2);
    printf("Difference: %.2lf\n", num1 - num2);
    printf("Product:    %.2lf\n", num1 * num2);

    if (num2 != 0) {
        printf("Quotient:   %.2lf\n", num1 / num2);
    } else {
        printf("Quotient:   Undefined (cannot divide by zero)\n");
    }

    return 0;
}