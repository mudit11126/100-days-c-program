//Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int n, original_n;
    int remainder;
    int reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original_n = n;

    if (n == 0) {
        printf("Reversed number: 0\n");
    }
    else {
        while (n != 0) {
            remainder = n % 10;                     
            reversed = (reversed * 10) + remainder; 
            n = n / 10;                             
        }

        printf("Reversed number of %d is: %d\n", original_n, reversed);
    }

    return 0;
}