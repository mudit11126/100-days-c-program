//Define a struct with enum Gender and print person's gender.
#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};
struct Person {
    enum Gender gender;
};

int main() {
    char input[20];
    char genderStr[20];
    struct Person p;

    scanf("%19s", input);

    if (strncmp(input, "Gender=", 7) == 0) {
        strcpy(genderStr, input + 7);
    } else {
        strcpy(genderStr, input);
    }
    if (strcmp(genderStr, "MALE") == 0) {
        p.gender = MALE;
    } else if (strcmp(genderStr, "FEMALE") == 0) {
        p.gender = FEMALE;
    } else if (strcmp(genderStr, "OTHER") == 0) {
        p.gender = OTHER;
    } else {
        return 0;
    }
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;

        case FEMALE:
            printf("Female\n");
            break;

        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}