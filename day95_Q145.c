//Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student findTopStudent(struct Student students[], int n) {
    struct Student top = students[0];
    int i;

    for (i = 1; i < n; i++) {
        if (students[i].marks > top.marks) {
            top = students[i];
        }
    }

    return top;
}

int main() {
    struct Student students[100];
    struct Student topper;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name, roll, marks for student %d: ", i + 1);
        scanf("%49s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }

    topper = findTopStudent(students, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n", topper.name, topper.roll, topper.marks);

    return 0;
}