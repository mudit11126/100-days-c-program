//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a number greater than 0.\n");
    }
    else if (n == 1) {
        printf("No even numbers between 1 and 1.\n");
    }
    else {
        for (i = 2; i <= n; i = i + 2) {
            product = product * i;
        }

        printf("The product of even numbers from 1 to %d is: %lld\n", n, product);
    }

    return 0;
}
