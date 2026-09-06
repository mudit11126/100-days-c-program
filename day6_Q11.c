//Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swap: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0;
}