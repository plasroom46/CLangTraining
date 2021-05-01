#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int counters[13] = {0};
    for (int i = 1; i <= 100000; i++)
    {
        int sum = 0;
        for (int j = 0; j < 2; j++)
        {
            sum += rand() % 6 + 1;
        }
        counters[sum]++;
    }
    for (int i = 2; i <= 12; i++)
    {
        printf("%d:%d \n", i, counters[i]);
    }
    return 0;
}