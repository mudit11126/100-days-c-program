//Q86: Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[100];
    int len = 0;
    int i, j;
    int isPalindrome = 1; 

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }
    i = 0;          
    j = len - 1;   

    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0; 
            break;
        }
        i++;
        j--;
    }
    if (isPalindrome == 1) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}