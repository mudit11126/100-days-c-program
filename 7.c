#include <stdio.h>

int main() {
    char str[100];
    int spaces = 0;
    int digits = 0;
    int special = 0;
    int i;
    
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

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