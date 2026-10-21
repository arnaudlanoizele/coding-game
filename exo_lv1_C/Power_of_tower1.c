#include <stdio.h>

int main(void)
{
    int lightX;
    int lightY;
    int initialTX;
    int initialTY;
    scanf("%d %d %d %d", &lightX, &lightY, &initialTX, &initialTY);

    while (1){
        int remainingTurns;
        scanf("%d", &remainingTurns);

        if (initialTY < lightY)
    {
        initialTY++;
        printf("S");
    }

    else if (initialTY > lightY)
    {
        initialTY--;
        printf("N");
    }

    if (initialTX < lightX)
    {
        initialTX++;
        printf("E");
    }

    else if (initialTX > lightX)
    {
        initialTX--;
        printf("W");
    }

    printf("\n");
    }
}

