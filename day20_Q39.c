//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int n, remainder;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        remainder = n % 10; 

        if (remainder % 2 != 0) {
            product = product * remainder;
        }

        n = n / 10; 
    }

    printf("Product of odd digits is: %d\n", product);

    return 0;
}