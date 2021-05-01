#include <stdio.h>

int main()
{
    int n, b[10] = {0};
    printf("Please enter ten numbers(0~9): \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        b[n]++;
    }
    int ans = 9;
    for (int i = 8; i >= 0; i--)
    {
        if(b[ans]<b[i])
        {
            ans = i;
        }
    }
    printf("Ans = %d\n", ans);
    return 0;
}