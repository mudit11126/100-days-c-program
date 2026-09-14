//Q71: Read and print a matrix.
#include <stdio.h>

int main() {
    int r, c, i, j;

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

    printf("Matrix elements are:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}