// Q95: Check if one string is a rotation of another.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    char temp[200];
    int len1 = 0, len2 = 0;
    int i, j;
    int isRotation = 0;

    printf("Enter first string: ");
    scanf("%[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    for (i = 0; str1[i] != '\0'; i++) {
        len1++;
    }
    for (i = 0; str2[i] != '\0'; i++) {
        len2++;
    }

    if (len1 != len2) {
        printf("The strings are not rotations of each other.\n");
        return 0;
    }

    for (i = 0; i < len1; i++) {
        temp[i] = str1[i];
    }
    for (i = 0; i < len1; i++) {
        temp[len1 + i] = str1[i];
    }
    temp[2 * len1] = '\0';

    for (i = 0; i <= len1; i++) {
        for (j = 0; j < len2; j++) {
            if (temp[i + j] != str2[j]) {
                break;
            }
        }
        if (j == len2) {
            isRotation = 1;
            break;
        }
    }
    if (isRotation == 1) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}