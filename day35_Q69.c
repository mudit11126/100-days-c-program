//Q69: Find the second largest element in an array.
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int largest = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    int second_largest = a[0];
    for (i = 0; i < n; i++) {
        if (a[i] != largest) {
            second_largest = a[i];
            break;
        }
    }

    for (i = 0; i < n; i++) {
        if (a[i] != largest && a[i] > second_largest) {
            second_largest = a[i];
        }
    }

    printf("Second largest element: %d\n", second_largest);

    return 0;
}