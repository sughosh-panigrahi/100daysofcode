#include <stdio.h>

int main()
{
    int n, i;
    int a[100], freq[100] = {0};

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(freq[a[i]] == 1)
        {
            printf("%d", a[i]);
            return 0;
        }

        freq[a[i]]++;
    }

    return 0;
}
