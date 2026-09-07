//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, temp;
    int remainder;
    int count = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    while (temp > 0) {
        temp = temp / 10;
        count++;
    }

    temp = n;
    while (temp > 0) {
        remainder = temp % 10;
        sum = sum + round(pow(remainder, count));
        temp = temp / 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}