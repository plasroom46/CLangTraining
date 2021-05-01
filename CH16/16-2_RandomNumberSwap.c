#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int  n[10];
    for (int i = 1; i <= 10; i++)
    {
        n[i - 1] = i;
    }
    for (int i = 1; i <= 10; i++)
    {
        int j = rand() % (11 - i) + i;
        int t = n[i - 1];
        n[i - 1] = n[j - 1];
        n[j - 1] = t;
        printf("%d ", n[i - 1]);
    }
    printf("\n");
    return 0;
}