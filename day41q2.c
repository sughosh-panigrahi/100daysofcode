#include <stdio.h>

int main() {
    char s[1000];
    int i = 0;

    scanf("%s", s);

    while (s[i] != '\0') {
        printf("%c\n", s[i]);
        i++;
    }

    return 0;
}
