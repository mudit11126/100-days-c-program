//Q78: Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int r, c, i, j;
    int sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    if (r != c) {
        printf("The matrix must be square (rows == columns) to find the diagonal sum.\n");
        return 0;
    }

    int a[r][c];

    printf("Enter elements of matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        sum = sum + a[i][i];
    }

    printf("Sum of main diagonal elements: %d\n", sum);

    return 0;
}