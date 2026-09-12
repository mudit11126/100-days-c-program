//Q54: Write a program to print the following pattern:
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 7; i += 2) {
        for (j = 1; j <= (7 - i) / 2; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 5; i >= 1; i -= 2) {
        for (j = 1; j <= (7 - i) / 2; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}