//Q59: Count even and odd numbers in an array.
#include <stdio.h>

int main() {
    int n, i;
    int even_count = 0;
    int odd_count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Even count: %d\n", even_count);
    printf("Odd count: %d\n", odd_count);

    return 0;
}