#include <stdio.h>

int main() {
    char str[100];
    int len = 0;
    int i, j;
    char temp;

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
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("%s\n", str);

    return 0;
}