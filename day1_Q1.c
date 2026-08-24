//Write a program to input two numbers and display their sum.
#include <stdio.h>

int main() {
    double num1, num2, sum;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    sum = num1 + num2;

    printf("Sum: %.2lf\n", sum);

    return 0;
}