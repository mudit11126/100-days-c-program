//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
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
        int first_negative = 0; 

        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                first_negative = arr[j];
                break; 
            }
        }
        printf("%d ", first_negative);
    }

    printf("\n");

    return 0;
}