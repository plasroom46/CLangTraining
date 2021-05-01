#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    // int counters[6] = {0, 0, 0, 0, 0, 0};
    // int counters[] = {0, 0, 0, 0, 0, 0};
    int counters[6] = {0};
    for (int i = 1; i <= 6000; i++)
    {
        int dice = rand() % 6 + 1;
        counters[dice - 1]++;
    }
    for (int i = 1; i <= 6; i++)
    {
        printf("%d:%d \n", i, counters[i - 1]);
    }
    return 0;
}