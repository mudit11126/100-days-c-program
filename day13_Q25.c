//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    char op;
    int num1, num2;

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (op) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            }
            break;

        case '%':
            if (num2 == 0) {
                printf("Error: Modulus by zero is not allowed.\n");
            } else {
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
