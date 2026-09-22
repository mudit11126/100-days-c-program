//Q87: Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0;
    int i;
    char ch;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        ch = str[i];
        if (ch == ' ') {
            spaces++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        }
        else {
            special++;
        }
    }
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}