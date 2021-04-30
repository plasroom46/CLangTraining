#include <stdio.h>
void PrintStars(int);
void PrintTriangle(int);

int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);
    PrintTriangle(N);
    return 0;
}

void PrintTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        PrintStars(i);
        printf("\n");
    }
}
void PrintStars(int i)
{
    for (int j = 1; j <= i; j++)
    {
        printf("*");
    }
}