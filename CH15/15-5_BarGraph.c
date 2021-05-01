#include <stdio.h>

int main()
{
    int n, b[10] = {0};
    printf("Please enter ten numbers(1~100): \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        b[(n - 1) / 10]++;
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("%3d: ", i * 10);
        for (int j = 1; j <= b[i-1]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}