```c
#include <stdio.h>

int main() {
    int n, i, total = 0, left = 0;
    int arr[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for (i = 0; i < n; i++) {
        if (left == total - left - arr[i]) {
            printf("%d", i);
            return 0;
        }

        left += arr[i];
    }

    printf("-1");

    return 0;
}
```
