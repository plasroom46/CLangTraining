#include <stdio.h>
void CountTo1(int);
void CountTo3(int);

int main()
{
    CountTo1(1);
    printf("***********\n");
    CountTo3(1);
    return 0;
}

void CountTo1(int i)
{
    if (i <= 3)
    {
        CountTo1(i + 1);
        printf("%d\n", i);
    }
}

void CountTo3(int i)
{
    if (i <= 3)
    {
        printf("%d\n", i);
        CountTo3(i + 1);
    }
}
