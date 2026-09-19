//Q81: Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("Total number of characters: %d\n", count);

    return 0;
}