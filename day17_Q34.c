//Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    int n, i;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("%d is a Prime number.\n", n);
    } else {
        printf("%d is not a Prime number.\n", n);
    }

    return 0;
}