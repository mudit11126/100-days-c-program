//Print all enum names and integer values using a loop.
#include <stdio.h>

enum Color {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum Color c;

    for (c = RED; c <= GREEN; c++) {
        switch (c) {
            case RED:
                printf("RED=%d\n", c);
                break;

            case YELLOW:
                printf("YELLOW=%d\n", c);
                break;

            case GREEN:
                printf("GREEN=%d\n", c);
                break;
        }
    }

    return 0;
}