//Q70: Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, k, i, step, last;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    k = k % n;

    for (step = 0; step < k; step++) {
        last = a[n - 1];
        for (i = n - 1; i > 0; i--) {
            a[i] = a[i - 1];
        }
        a[0] = last;
    }

    printf("Array after rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}