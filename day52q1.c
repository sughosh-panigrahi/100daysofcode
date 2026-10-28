```c
#include <stdio.h>

int main() {
    int arr[100], n, x, i;
    
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}
```
