//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main() {
    char name[100];
    int len = 0;
    int lastSpaceIndex = -1;
    int i;
    char ch;

    printf("Enter a full name: ");
    scanf("%[^\n]", name);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpaceIndex = i;
        }
        len++;
    }

    if (name[0] != ' ') {
        ch = name[0];
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        printf("%c. ", ch);
    }

    for (i = 0; i < lastSpaceIndex; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            ch = name[i + 1];
            if (ch >= 'a' && ch <= 'z') {
                ch = ch - 32;
            }
            printf("%c. ", ch);
        }
    }

    if (lastSpaceIndex != -1) {
        for (i = lastSpaceIndex + 1; name[i] != '\0'; i++) {
            printf("%c", name[i]);
        }
    }

    printf("\n");

    return 0;
}