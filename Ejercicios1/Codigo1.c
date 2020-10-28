#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i, j = 0;
    scanf("%d", &n);

    for (i = 10; i < n * 5; i *= 2)
    {
        j++;
        printf("\n %d Algoritmo", j);
    }
    return 0;
}