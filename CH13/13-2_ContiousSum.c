#include <stdio.h>
int Sum(int);

int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);
    printf("The sum is: %d.\n", Sum(N));
    return 0;
}

int Sum(int N)
{
    if (N == 1)
    {
        return N;
    }
    else
    {
        return Sum(N - 1) + N;
    }
}