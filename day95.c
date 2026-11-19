#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function returning a structure
struct Student topper(struct Student s[], int n) {
    int i, max = 0, index = 0;

    for (i = 0; i < n; i++) {
        if (s[i].marks > max) {
            max = s[i].marks;
            index = i;
        }
    }

    return s[index];
}

int main() {
    struct Student s[3], top;
    int i;

    // Input student details
    for (i = 0; i < 3; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Receive returned structure
    top = topper(s, 3);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll, top.marks);

    return 0;
}
