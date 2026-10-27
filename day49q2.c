```c
#include <stdio.h>

int main() {
    char s[1000];
    int i, start = 0, last = 0;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ' || s[i] == '\n') {
            last = i;
        }
    }

    for (i = 0; i < last; i++) {
        if (i == 0 || s[i - 1] == ' ') {
            printf("%c.", s[i]);
        }
    }

    printf(" ");

    for (i = last + 1; s[i] != '\0' && s[i] != '\n'; i++) {
        printf("%c", s[i]);
    }

    return 0;
}
```
