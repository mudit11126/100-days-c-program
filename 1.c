#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    int i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    for (i = 0; str[i] != '\0'; i++) {
        count++;
    }
    printf("%d\n", count);

    return 0;
}