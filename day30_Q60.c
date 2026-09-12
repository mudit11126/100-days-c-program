//Q60: Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int n, i;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] > 0) {
            positive_count++;
        } else if (a[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("Positive count: %d\n", positive_count);
    printf("Negative count: %d\n", negative_count);
    printf("Zero count: %d\n", zero_count);

    return 0;
}