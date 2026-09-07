//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int n, temp;
    int binary[32]; 
    int i = 0;
    int j;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative number.\n");
    }
    else if (n == 0) {
        printf("Binary representation: 0\n");
    }
    else {
        temp = n; 

        while (temp > 0) {
            binary[i] = temp % 2; 
            temp = temp / 2;      
            i++;                 

        printf("Binary representation of %d is: ", n);
        for (j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
        printf("\n");
    }

    return 0;
}