#include <stdio.h>

int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);
    int isPrime = 1;
    for (int i = 2; i < N / 2 && isPrime; i++)
    {
        if (N % i == 0)
            isPrime = 0;
    }
    if (isPrime)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}