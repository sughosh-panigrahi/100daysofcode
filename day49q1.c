```c
#include <stdio.h>

int main() {
    char s[1000];
    int i;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        if (i == 0 || s[i - 1] == ' ') {
            if (s[i] != ' ' && s[i] != '\n') {
                printf("%c.", s[i]);
            }
        }
    }

    return 0;
}
```
