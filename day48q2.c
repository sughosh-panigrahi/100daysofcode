Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/```c
#include <stdio.h>

int main() {
    char s[1000];
    int i, start = 0, end;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ' || s[i] == '\n') {
            for (end = i - 1; end >= start; end--)
                printf("%c", s[end]);

            printf("%c", s[i]);
            start = i + 1;
        }
    }

    return 0;
}
```
