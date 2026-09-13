//Q61: Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("Element found at index %d\n", i);
    } else {
        printf("Element not found\n");
    }

    return 0;
}