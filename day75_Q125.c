//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    FILE *file;
    char text[200];
    int i;

    file = fopen("data.txt", "a");

    if (file == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == '\n') {
            text[i] = '\0';
            break;
        }
    }
    fprintf(file, "\n%s", text);
    fclose(file);
    printf("File updated successfully with appended text.\n");
    
    return 0;
}