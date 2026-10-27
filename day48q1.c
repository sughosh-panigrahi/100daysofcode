```c
#include <stdio.h>
#include <string.h>

int main() {
    char a[2000], b[1000], temp[2000];

    scanf("%s %s", a, b);

    if (strlen(a) != strlen(b)) {
        printf("Not rotation");
        return 0;
    }

    strcpy(temp, a);
    strcat(temp, a);

    if (strstr(temp, b) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
```
