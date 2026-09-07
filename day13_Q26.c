//Write a program to print numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive number (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a number greater than 0.\n");
    } else {
        for (i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}