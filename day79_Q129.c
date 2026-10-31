//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main() {
    FILE *file;
    int num;
    int sum = 0;
    int count = 0;
    float average = 0.0;

    file = fopen("numbers.txt", "r");

    if (file == NULL) {
        printf("Error: Could not open numbers.txt!\n");
        return 1;
    }
    while (fscanf(file, "%d", &num) != EOF) {
        sum = sum + num;
        count++;
    }
    if (count > 0) {
        average = (float)sum / count;
    }
    fclose(file);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}