//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s1;

    printf("Student: ");
    scanf("%49s %d %d", s1.name, &s1.roll, &s1.marks);

    printStudent(s1);

    return 0;
}