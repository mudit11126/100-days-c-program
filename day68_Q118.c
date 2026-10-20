//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n, i, j;
    int missing = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    for (i = 0; i <= n; i++) {
        int found = 0;

        for (j = 0; j < n; j++) {
            if (nums[j] == i) {
                found = 1;
                break; 
            }
        }
        if (found == 0) {
            missing = i;
            break;
        }
    }
    printf("%d\n", missing);

    return 0;
}