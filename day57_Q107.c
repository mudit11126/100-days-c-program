//Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int result[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        result[i] = -1; 
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                result[i] = arr[j];
                break; 
            }
        }
    }
    for (i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%d\n", result[i]);
        } else {
            printf("%d, ", result[i]);
        }
    }

    return 0;
}