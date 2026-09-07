//Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int n, original;
    int remainder;
    int reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        remainder = n % 10;
        reversed = (reversed * 10) + remainder;
        n = n / 10;
    }

    if (original == reversed) {
        printf("%d is a Palindrome.\n", original);
    } else {
        printf("%d is not a Palindrome.\n", original);
    }

    return 0;
}