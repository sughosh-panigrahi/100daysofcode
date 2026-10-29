```c
#include <stdio.h>

int main() {
    int n, x;
    int total, sum;

    scanf("%d", &n);

    total = n * (n + 1) / 2;

    for (x = 1; x <= n; x++) {
        sum = x * (x + 1) / 2;

        if (sum == total - sum + x) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
```
