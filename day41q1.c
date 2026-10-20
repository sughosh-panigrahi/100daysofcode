#include <stdio.h>

int main() {
    char s[1000];
    int count = 0;

    scanf("%[^\n]", s);

    while (s[count] != '\0') {
        count++;
    }

    printf("%d", count);

    return 0;
}
