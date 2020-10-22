#include <stdio.h>
#include <time.h>

void f1(int n)
{
    int i, cont = 0;
    for (i = 1; i < n; i *= 6)
    {
        printf("\n%d\tHola", ++cont);
    }
}

void f2(int n)
{
    int i, j, cont = 0;
    for (i = 1; i < n; i *= 2)
    {
        for (j = 1; j < n; j++)
        {
            printf("\n%d\tHola", ++cont);
        }
    }
}

void f3(int n)
{
    int i, j, cont = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cont++;
            printf("\n%d\tHola", cont);
        }
    }
}

void f4(int n)
{
    int i, j, cont = 0;
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            cont++;
            printf("\n%d\tHola", cont);
        }
    }
}

void f5(int n)
{
    int i, j, cont = 0;
    for (i = 1; i < n; i++)
    {
        for (j = i; j < n; j += 2)
        {
            cont++;
            printf("\n%d\tHola", cont);
        }
    }
}

void f6(int n)
{
    int i, cont = 0;
    for (i = 1; i < n; i *= 2)
    {
        cont++;
        printf("\n%d\tHola", cont);
    }
}

int main(void)
{
    double time_spent;
    clock_t begin, end;

    begin = clock();

    int n;
    scanf("%d", &n);
    f2(n);

    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nSeg = %f", time_spent);
    return 0;
}