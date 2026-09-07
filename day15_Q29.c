//Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n, i;
    double factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number does not exist.\n");
    }
    else if (n == 0) {
        printf("Factorial of 0 is: 1\n");
    }
    else {
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        printf("Factorial of %d is: %.0f\n", n, factorial);
    }

    return 0;
}