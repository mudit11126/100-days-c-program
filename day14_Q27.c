//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, i;
    int odd_number;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a number greater than 0.\n");
    } else {
        for (i = 1; i <= n; i++) {
            odd_number = 2 * i - 1; 
            sum = sum + odd_number;  
        }

        printf("The sum of the first %d odd numbers is: %d\n", n, sum);
    }

    return 0;
}