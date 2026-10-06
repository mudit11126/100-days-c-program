//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    int answer[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    for (i = 0; i < n; i++) {
        int product = 1;

        for (j = 0; j < n; j++) {
            if (i != j) {
                product = product * nums[j];
            }
        }

        answer[i] = product;
    }
    printf("[");
    for (i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%d", answer[i]);
        } else {
            printf("%d,", answer[i]);
        }
    }
    printf("]\n");

    return 0;
}