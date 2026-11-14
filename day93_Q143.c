//Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student students[100];
    int n, i;
    int topper_index = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name, roll, marks for student %d: ", i + 1);
        scanf("%49s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }
    for (i = 1; i < n; i++) {
        if (students[i].marks > students[topper_index].marks) {
            topper_index = i;
        }
    }
    printf("Topper: %s (Marks: %d)\n", students[topper_index].name, students[topper_index].marks);

    return 0;
}