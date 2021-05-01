#include <stdio.h>

int main()
{
    int n[10], q;
    printf("Please enter ten numbers: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
    }
    while (1)
    {
        int maxIndex = -1;
        printf("Q: ");
        scanf("%d", &q);
        if (q == 0)
        {
            break;
        }
        else
        {
            for (int i = 0; i < 10; i++)
            {
                if (n[i] <= q && (maxIndex == -1 || n[i] > n[maxIndex]))
                {
                    maxIndex = i;
                }
            }
            if (maxIndex != -1)
            {
                printf("Max number = %d.\n", n[maxIndex]);
            }
        }
    }
    return 0;
}