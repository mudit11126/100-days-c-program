//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int n, first, last, place = 1;

    printf("Enter a number:");
    scanf("%d", &n);

    last = n % 10;
    first = n;

    while (first >= 10) {
        first = first / 10;
        place = place * 10;
    }
    n = n - (first * place) - last; 
    n = n + (last * place) + first; 
    printf("Swapped number: %d\n", n);

    return 0;
}