//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>

int main() {
    int n;
    int ans = -1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int x = 1; x <= n; x++) {
        int left_sum = 0;
        int right_sum = 0;

        for (int i = 1; i <= x; i++) {
            left_sum += i;
        }
        for (int i = x; i <= n; i++) {
            right_sum += i;
        }
        if (left_sum == right_sum) {
            ans = x;
            break;
        }
    }
    printf("%d\n", ans);

    return 0;
}