#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    if (N == 0)
    {
        printf("%d\n", N);
        return 0;
    }

    int closest;
    scanf("%d", &closest);

    for (int i = 1; i < N; i++)
    {
        int temperature;
        scanf("%d", &temperature);

        if (abs(temperature) < abs(closest))
        {
            closest = temperature;
        }
        else if (abs(temperature) == abs(closest) && temperature > 0)
        {
            closest = temperature;
        }
    }

    printf("%d\n", closest);
    return 0;
}