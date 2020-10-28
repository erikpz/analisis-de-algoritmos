#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i, j, k, l = 0;
    scanf("%d", &n);

    for (i = 0; i < n * 5; i += 2)
    {
        for (j = 0; j < 2 * n; j++)
        {
            for (k = j; k < n; k++)
            {
                l++;
                printf("\n%d Algoritmos", l);
            }
        }
    }
}