//Q100: Print all sub-strings of a string.
#include <stdio.h>

int main() {
    char str[100];
    int len = 0;
    int i, j, k;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0') {
        len++;
    }

    printf("\nAll substrings of the string are:\n");

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}