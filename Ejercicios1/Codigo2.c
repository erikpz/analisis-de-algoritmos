#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i, j, k = 0;
    scanf("%d", &n);
    for (j = n; j > 1; j /= 2)
    {
        if (j < (n / 2))
        {
            for (i = 0; i < n; i += 2)
            {
                k++;
                printf("\n %d Algoritmo", k);
            }
        }
    }
}