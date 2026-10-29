```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j, k;
    int count, max = 0, repeat;

    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++) {
        count = 0;

        for (j = i; s[j] != '\0'; j++) {
            repeat = 0;

            for (k = i; k < j; k++) {
                if (s[k] == s[j]) {
                    repeat = 1;
                    break;
                }
            }

            if (repeat == 1) {
                break;
            }

            count++;
        }

        if (count > max) {
            max = count;
        }
    }

    printf("%d", max);

    return 0;
}
```
