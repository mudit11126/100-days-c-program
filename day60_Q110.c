//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
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
        return 0;
    }

    for (i = 0; i <= n - k; i++) {
        int max_element = arr[i];

        for (j = i + 1; j < i + k; j++) {
            if (arr[j] > max_element) {
                max_element = arr[j];
            }
        }
        printf("%d ", max_element);
    }

    printf("\n");

    return 0;
}