#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    /* int n, i;
    if (argc != 3)
        exit(1); */

    int n, i;
    scanf("%d", &n);

    /* n = atoi(argv[1]); */

    for (i = 10; i < n * 5; i *= 2)
    {
        printf("\n Algoritmo");
    }
    return 0;
}