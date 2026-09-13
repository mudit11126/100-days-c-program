//Q67: Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, i, pos, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &val);

    for (i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos - 1] = val;

    printf("Array after insertion: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}