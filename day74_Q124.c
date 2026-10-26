//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    FILE *srcFile;
    FILE *destFile;
    char sourceName[100];
    char destName[100];
    char ch;

    printf("Enter source filename: ");
    scanf("%99s", sourceName);

    printf("Enter destination filename: ");
    scanf("%99s", destName);

    srcFile = fopen(sourceName, "r");
    if (srcFile == NULL) {
        printf("Error: Could not open source file!\n");
        return 1;
    }
    destFile = fopen(destName, "w");
    if (destFile == NULL) {
        printf("Error: Could not open destination file!\n");
        fclose(srcFile);
        return 1;
    }
    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile);
    }
    fclose(srcFile);
    fclose(destFile);

    printf("File copied successfully to %s\n", destName);

    return 0;
}