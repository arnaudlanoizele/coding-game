# include <stdio.h>

int main(void)
{
    while (1)
    {
        int maxHeight = -1;
        int maxIndex = 0;

        for (int i = 0; i < 8; i++)
        {
            int mountainH;
            scanf("%d", &mountainH);

            if (mountainH > maxHeight)
            {
                maxHeight = mountainH;
                maxIndex = i;
            }
        }
        printf("%d\n", maxIndex);
    }
    return 0;
}