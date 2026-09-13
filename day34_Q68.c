//Q68: Delete an element from an array.
#include <stdio.h>

int main() {
    int n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    for (i = pos - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    printf("Array after deletion: ");
    for (i = 0; i < n - 1; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}