#include <stdio.h>

int main()
{
    int n, first, last, digits, power, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    digits = 0;
    power = 1;

    while (n >= 10)
    {
        n = n / 10;
        digits++;
        power = power * 10;
    }

    first = n;

    middle = (n * power + 0);  // first digit position

    result = last * power;
    result = result + (n % power) * 10;
    result = result + first;

    printf("Number after swapping = %d", result);

    return 0;
}

