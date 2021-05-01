#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Array1D();

int main()
{
    srand(time(0));
    int v[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int r = rand() % (9 - k) + k;
            int m = r / 3;
            int n = r % 3;
            int t = v[i][j];
            v[i][j] = v[m][n];
            v[m][n] = t;
            k++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
    printf("***************\n");
    Array1D();
    return 0;
}

void Array1D()
{
    int v[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 9; i++)
    {
        int r = rand() % (9 - i) + i;
        int t = v[i];
        v[i] = v[r];
        v[r] = t;
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", v[i]);
        if (i%3==2)
        {
            printf("\n");
        }
    }
}