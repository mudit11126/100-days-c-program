//Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    temp = a;  
    a = b;     
    b = temp;  

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}