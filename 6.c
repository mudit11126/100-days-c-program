#include <stdio.h>

int main() {
    char str[100];
    int len = 0;
    int i, j;
    int is_palindrome = 1;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }
    i = 0;
    j = len - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            is_palindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if (is_palindrome == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}