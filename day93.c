#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[3];
    int i, max = 0, index = 0;

    // Input student details
    for (i = 0; i < 3; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Find student with highest marks
    for (i = 0; i < 3; i++) {
        if (s[i].marks > max) {
            max = s[i].marks;
            index = i;
        }
    }

    // Print topper
    printf("Topper: %s (Marks: %d)", s[index].name, s[index].marks);

    return 0;
}
