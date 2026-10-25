//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int in_word = 0;
    
    file = fopen("sample.txt", "r");

    if (file == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            words++;
        }
    }
    if (characters > 0 && ch != '\n') {
        lines++;
    }
    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}