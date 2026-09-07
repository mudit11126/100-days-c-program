//Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit
#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 0) {
        bill = 0.0;
        printf("Total Bill: Rs %.2f\n", bill);
    }
    else if (units <= 100) {
        bill = units * 5.0;
        printf("Total Bill: Rs %.2f\n", bill);
    }
    else if (units <= 200) {
        bill = (100 * 5.0) + (units - 100) * 7.0;
        printf("Total Bill: Rs %.2f\n", bill);
    }
    else if (units <= 300) {
        bill = (100 * 5.0) + (100 * 7.0) + (units - 200) * 10.0;
        printf("Total Bill: Rs %.2f\n", bill);
    }
    else {
        bill = (100 * 5.0) + (100 * 7.0) + (100 * 10.0) + (units - 300) * 12.0;
        printf("Total Bill: Rs %.2f\n", bill);
    }

    return 0;
}