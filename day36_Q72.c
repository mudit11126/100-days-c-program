//Q72: Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int r, c, i, j;
    int sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];

    printf("Enter elements of matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum = sum + a[i][j];
        }
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}