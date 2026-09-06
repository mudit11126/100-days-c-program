//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet character: ");
    scanf(" %c", &ch);

    if (isalpha(ch)) 
    {
        char lower = tolower(ch);

        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') 
        {
            printf("'%c' is a vowel.\n", ch);
        } else 
        {
            printf("'%c' is a consonant.\n", ch);
        }
    } 
    else 
    {
        printf("'%c' is not an alphabet character.\n", ch);
    }

    return 0;
}