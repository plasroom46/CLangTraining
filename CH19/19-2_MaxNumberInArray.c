#include <stdio.h>
int Max(int[], int);

int main()
{
    int a[] = {3, 9, 7};
    printf("Max = %d\n", Max(a, 3));
    int b[] = {10, 5, 4, 6, 12};
    printf("Max = %d\n", Max(b, 5));
    return 0;
}

int Max(int v[], int n)
{
    int max = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    return max;
}