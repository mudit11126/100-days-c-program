// Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main() {
    char str[200];
    int start = 0, end = 0;
    int i, j;
    char temp;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    i = 0;
    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;

            j = start;
            while (j < end) {
                temp = str[j];
                str[j] = str[end];
                str[end] = temp;
                j++;
                end--;
            }
            start = i + 1;
        }
        if (str[i] == '\0') {
            break;
        }

        i++;
    }
    printf("Sentence after reversing each word: %s\n", str);

    return 0;
}
