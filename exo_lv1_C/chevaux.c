#include <stdio.h>
#include <stdlib.h>

int comparer(const void *a, const void *b)
{
    int valeurA = *(const int *)a;
    int valeurB = *(const int *)b;

    return valeurA - valeurB;
}

int main(void)
{
    int N;
    scanf("%d", &N);

    int chevaux[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &chevaux[i]);
    }

    qsort(chevaux, N, sizeof(int), comparer);

    int difference = chevaux[1] - chevaux[0];

    for (int i = 1; i < N; i++)
    {
        int ecart = chevaux[i] - chevaux[i - 1];

        if (ecart < difference)
        {
            difference = ecart;
        }
    }

    printf("%d\n", difference);
    return 0;
}
