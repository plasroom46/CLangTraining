#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int n, counter[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        do
        {
            n = rand() % 10 + 1;
        } while (counter[n-1]!=0);
        printf("%d ", n);
        counter[n - 1]++;
    }
    printf("\n");
    return 0;
}