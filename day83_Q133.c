//Create an enum for months and print how many days each month has.
#include <stdio.h>
#include <string.h>

enum Month {
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main() {
    char input[10];
    enum Month m;

    scanf("%9s", input);

    if (strcmp(input, "JAN") == 0) {
        m = JAN;
    } else if (strcmp(input, "FEB") == 0) {
        m = FEB;
    } else if (strcmp(input, "MAR") == 0) {
        m = MAR;
    } else if (strcmp(input, "APR") == 0) {
        m = APR;
    } else if (strcmp(input, "MAY") == 0) {
        m = MAY;
    } else if (strcmp(input, "JUN") == 0) {
        m = JUN;
    } else if (strcmp(input, "JUL") == 0) {
        m = JUL;
    } else if (strcmp(input, "AUG") == 0) {
        m = AUG;
    } else if (strcmp(input, "SEP") == 0) {
        m = SEP;
    } else if (strcmp(input, "OCT") == 0) {
        m = OCT;
    } else if (strcmp(input, "NOV") == 0) {
        m = NOV;
    } else if (strcmp(input, "DEC") == 0) {
        m = DEC;
    } else {
        return 0;
    }
    switch (m) {
        case FEB:
            printf("28 or 29 days\n");
            break;

        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;

        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days\n");
            break;
    }

    return 0;
}