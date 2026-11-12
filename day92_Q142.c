//Store details of 5 students in an array of structures and print all.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter details of student %d (Name Roll Marks): ", i + 1);
        scanf("%49s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }
    printf("\nName\t\tRoll\tMarks\n");
    printf("-----------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%-15s\t%d\t%d\n", students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}