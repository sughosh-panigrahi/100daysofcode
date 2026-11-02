#include <stdio.h>

enum Traffic { RED, YELLOW, GREEN };

int main()
{
    enum Traffic light;
    char input[20];

    scanf("%s", input);

    if(input[0] == 'R')
        light = RED;
    else if(input[0] == 'Y')
        light = YELLOW;
    else
        light = GREEN;

    switch(light)
    {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;
    }

    return 0;
}
