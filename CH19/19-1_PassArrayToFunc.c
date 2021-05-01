#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayRand(int[10]);
int ArrayMax(int[10]);
void ArrayPrint(int[10]);

int main()
{
    srand(time(0));
    int v[10];
    ArrayRand(v);
    ArrayPrint(v);
    printf("Max = %d\n", ArrayMax(v));
    return 0;
}

void ArrayRand(int v[10])
{
    for (int i = 0; i < 10; i++)
    {
        v[i] = rand() % 100;
    }
}

int ArrayMax(int v[10])
{
    int max = v[0];
    for (int i = 1; i < 10; i++)
    {
        if(v[i]>max)
        {
            max = v[i];
        }
    }
    return max;
}
void ArrayPrint(int v[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}