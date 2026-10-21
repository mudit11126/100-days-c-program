//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n, i;
    int repeated = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int visited[1000] = {0};

    for (i = 0; i < n; i++) {
        int element = nums[i];

        if (visited[element] == 1) {
            repeated = element;
            break;
        }
        visited[element] = 1;
    }
    printf("%d\n", repeated);

    return 0;
}