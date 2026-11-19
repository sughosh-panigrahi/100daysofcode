#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[5];
    int i;

    // Input student details
    for (i = 0; i < 5; i++) {
        printf("Enter name, roll and marks of student %d:\n", i + 1);

        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%d", &s[i].marks);
    }

    // Display student details
    printf("\nName\tRoll\tMarks\n");

    for (i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
