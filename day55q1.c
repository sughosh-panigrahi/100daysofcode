```c
#include <stdio.h>

int main() {
    int n, i, j, count, found = -1;
    int nums[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        count = 0;

        for (j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        if (count > n / 2) {
            found = nums[i];
            break;
        }
    }

    printf("%d", found);

    return 0;
}
```
