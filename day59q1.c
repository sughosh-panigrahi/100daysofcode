```c
#include <stdio.h>

int main() {
    int n, k, i, sum = 0, max;
    int arr[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (i = 0; i < k; i++) {
        sum += arr[i];
    }

    max = sum;

    for (i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];

        if (sum > max) {
            max = sum;
        }
    }

    printf("%d", max);

    return 0;
}
```
