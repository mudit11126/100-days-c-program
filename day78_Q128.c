//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int vowels = 0;
    int consonants = 0;

    file = fopen("text.txt", "r");

    if (file == NULL) {
        printf("Error: Could not open text.txt!\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}