#include <stdio.h>
int Max10(int[]);
int Avg10(int[]);

int main()
{
    int n[10];
    printf("Please enter ten numbers: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
    }
    printf("Max: %d.\n", Max10(n));
    printf("Avg: %d.\n", Avg10(n));
    return 0;
}


int Max10(int n[10])
{
    int max = n[0];
    for (int i = 1; i < 10; i++)
    {
        if(max<n[i])
        {
            max = n[i];
        }
    }
    return max;
}

int Avg10(int n[10])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += n[i];
    }
    return sum / 10;
}
