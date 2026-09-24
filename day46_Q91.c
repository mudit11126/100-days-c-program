//Q91: Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[100], result[100];
    int i, j = 0;
    char ch;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        ch = str[i];

        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result[j] = ch;
            j++;
        }
    }

    result[j] = '\0';
    printf("String after removing vowels: %s\n", result);

    return 0;
}