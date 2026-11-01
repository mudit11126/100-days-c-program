//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

int main() {
    FILE *file;
    int n, i;
    char name[50];
    int roll;
    int marks;

    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error: Could not create file!\n");
        return 1;
    }
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        scanf("%49s %d %d", name, &roll, &marks);
        fprintf(file, "%s %d %d\n", name, roll, marks);
    }
    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file for reading!\n");
        return 1;
    }
    while (fscanf(file, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(file);

    return 0;
}