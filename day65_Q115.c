//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>

int main() {
    char s[100];
    char t[100];
    int len_s = 0;
    int len_t = 0;
    int i, j;
    char ch;
    int is_anagram = 1;

    printf("Enter first string: ");
    fgets(s, sizeof(s), stdin);

    printf("Enter second string: ");
    fgets(t, sizeof(t), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
    }
    for (i = 0; t[i] != '\0'; i++) {
        if (t[i] == '\n') {
            t[i] = '\0';
            break;
        }
    }
    for (i = 0; s[i] != '\0'; i++) {
        len_s++;
    }
    for (i = 0; t[i] != '\0'; i++) {
        len_t++;
    }
    if (len_s != len_t) {
        printf("Not Anagram\n");
        return 0;
    }
    for (ch = 'a'; ch <= 'z'; ch++) {
        int count_s = 0;
        int count_t = 0;

        for (i = 0; i < len_s; i++) {
            if (s[i] == ch) {
                count_s++;
            }
        }

        for (j = 0; j < len_t; j++) {
            if (t[j] == ch) {
                count_t++;
            }
        }

        if (count_s != count_t) {
            is_anagram = 0;
            break;
        }
    }
    if (is_anagram == 1) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}