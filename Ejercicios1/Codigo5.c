#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i, j, k = 0;
    scanf("%d", &n);

    for (i = 1; i < 4 * n; i *= 2)
    {
        for (j = i; j < 5 * n; j += 3)
        {
            k++;
            printf("\n%d Algoritmos", k);
        }
    }
}