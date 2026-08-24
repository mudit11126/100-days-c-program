//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main() {
    double radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = (22/7) * radius * radius;
    circumference = 2 * (22/7) * radius;

    printf("Area:          %.2lf\n", area);
    printf("Circumference: %.2lf\n", circumference);

    return 0;
}