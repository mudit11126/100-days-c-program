//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main() {
    int n, k, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid value of k\n");
        return 0;
    }
    int max_sum = 0;
    for (i = 0; i < k; i++) {
        max_sum += arr[i];
    }
    for (i = 1; i <= n - k; i++) {
        int current_sum = 0;

        for (j = i; j < i + k; j++) {
            current_sum += arr[j];
        }
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    printf("%d\n", max_sum);

    return 0;
}