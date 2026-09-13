//Q66: Insert an element in a sorted array at the appropriate position
#include <stdio.h>

int main() {
    int n, i, key, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter elements in sorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    pos = n;
    for (i = 0; i < n; i++) {
        if (key < a[i]) {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = key;

    printf("Array after insertion: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}