//Q97: Print the initials of a name.
#include <stdio.h>

int main() {
    char name[100];
    int i;
    char ch;
    printf("Enter a full name: ");
    scanf("%[^\n]", name);

    printf("Initials: ");

    if (name[0] != ' ') {
        ch = name[0];
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        printf("%c ", ch);
    }

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            ch = name[i + 1];
            if (ch >= 'a' && ch <= 'z') {
                ch = ch - 32;
            }
            printf("%c ", ch);
        }
    }

    printf("\n");

    return 0;
}
