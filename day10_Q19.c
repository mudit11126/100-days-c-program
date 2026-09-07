//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("These sides do not form a valid triangle.\n");
    }

    else if (a == b && b == c) {
        printf("Equilateral Triangle\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles Triangle\n");
    }
    else {
        printf("Scalene Triangle\n");
    }

    return 0;
}

