//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int r, c, i, j;
    int is_distinct = 1;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    if (r != c) {
        printf("The matrix must be square (rows == columns) to check diagonal elements.\n");
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
        for (j = i + 1; j < r; j++) {
            if (a[i][i] == a[j][j]) {
                is_distinct = 0;
                break;
            }
        }
        if (is_distinct == 0) {
            break;
        }
    }

    if (is_distinct == 1) {
        printf("All diagonal elements are distinct.\n");
    } else {
        printf("Diagonal elements are not distinct.\n");
    }

    return 0;
}