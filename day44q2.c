```c
#include <stdio.h>

int main() {
    char s[1000];
    int i;

    scanf("%[^\n]", s);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            s[i] = '-';
        }
    }

    printf("%s", s);

    return 0;
}
```
