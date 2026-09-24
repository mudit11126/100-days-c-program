//Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, j;
    char foundChar = '\0';

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            for (j = i + 1; str[j] != '\0'; j++) {
                if (str[i] == str[j]) {
                    foundChar = str[i];
                    break;
                }
            }
        }
        if (foundChar != '\0') {
            break;
        }
    }
    if (foundChar != '\0') {
        printf("First repeating lowercase alphabet: %c\n", foundChar);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}