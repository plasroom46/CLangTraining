#include <stdio.h>
int S(int);

int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);
    printf("The total methods are: %d.\n", S(N));
    return 0;
}

int S(int N)
{
    if (N <= 2)
    {
        return N;
    }
    else
    {
        return S(N - 1) + S(N - 2);
    }
}