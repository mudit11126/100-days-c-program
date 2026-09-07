//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int n, remainder;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        remainder = n % 10;     
        sum = sum + remainder;  
        n = n / 10;            
    }

    printf("Sum of digits is: %d\n", sum);

    return 0;
}
