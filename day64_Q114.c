//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>

int main() {
    char s[100];
    int length = 0;
    int max_len = 0;
    int i, j, p, q;

    printf("Enter string: ");
    scanf("%99s", s);

    for (i = 0; s[i] != '\0'; i++) {
        length++;
    }
    for (i = 0; i < length; i++) {
        for (j = i; j < length; j++) {
            int has_repeat = 0;

            for (p = i; p <= j; p++) {
                for (q = p + 1; q <= j; q++) {
                    if (s[p] == s[q]) {
                        has_repeat = 1;
                        break;
                    }
                }
                if (has_repeat == 1) {
                    break;
                }
            }
            if (has_repeat == 0) {
                int current_len = j - i + 1;
                if (current_len > max_len) {
                    max_len = current_len;
                }
            }
        }
    }
    printf("%d\n", max_len);

    return 0;
}