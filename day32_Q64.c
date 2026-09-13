//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};
    int digit, i;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0) {
        num = -num;
    }

    if (num == 0) {
        count[0] = 1;
    }

    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    int max_digit = 0;
    int max_count = count[0];

    for (i = 1; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_digit = i;
        }
    }

    printf("Most frequent digit: %d\n", max_digit);

    return 0;
}