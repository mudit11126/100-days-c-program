//Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];
    int row_sum[r];

    printf("Enter elements of matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        row_sum[i] = 0;
        for (j = 0; j < c; j++) {
            row_sum[i] = row_sum[i] + a[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (i = 0; i < r; i++) {
        printf("Row %d sum: %d\n", i + 1, row_sum[i]);
    }

    return 0;
}