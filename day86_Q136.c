//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
#include <string.h>

enum MenuChoice {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char operation[20];
    int num1, num2;
    enum MenuChoice choice;

    scanf("%19s %d %d", operation, &num1, &num2);

    if (strcmp(operation, "ADD") == 0) {
        choice = ADD;
    } else if (strcmp(operation, "SUBTRACT") == 0) {
        choice = SUBTRACT;
    } else if (strcmp(operation, "MULTIPLY") == 0) {
        choice = MULTIPLY;
    } else {
        return 0;
    }
    switch (choice) {
        case ADD:
            printf("%d\n", num1 + num2);
            break;

        case SUBTRACT:
            printf("%d\n", num1 - num2);
            break;

        case MULTIPLY:
            printf("%d\n", num1 * num2);
            break;
    }

    return 0;
}