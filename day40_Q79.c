//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int r, c, i, j, s;

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

    printf("Diagonal traversal:\n");

    for (s = 0; s <= (r - 1) + (c - 1); s++) {
        if (s % 2 == 0) {
            for (i = r - 1; i >= 0; i--) {
                j = s - i;
                if (j >= 0 && j < c) {
                    printf("%d ", a[i][j]);
                }
            }
        } else {
            for (i = 0; i < r; i++) {
                j = s - i;
                if (j >= 0 && j < c) {
                    printf("%d ", a[i][j]);
                }
            }
        }
    }

    printf("\n");
    return 0;
}