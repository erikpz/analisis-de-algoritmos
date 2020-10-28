#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i, j, k = 0;
    scanf("%d", &n);
    i = n;
    while (i >= 0)
    {
        for (j = n; i < j; j /= 2)
        {
            k++;
            printf("\n%d Algoritmos", k);
        }
    }
}