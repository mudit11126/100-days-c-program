//Q57: Find the sum of array elements.
#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + a[i];
    }

    printf("Sum: %d\n", sum);

    return 0;
}