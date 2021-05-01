#include <stdio.h>
#include <stdlib.h>

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

        printf("Q: ");
        scanf("%d", &q);
        if (q == 0)
        {
            break;
        }
        else
        {
            int nearestNumber = n[0];
            int nearestDistance = abs(nearestNumber - q);
            for (int i = 1; i < 10; i++)
            {
                int distance = abs(n[i] - q);
                if (distance < nearestDistance || (distance == nearestDistance && n[i] < nearestNumber))
                {
                    nearestNumber = n[i];
                    nearestDistance = distance;
                }
            }
            printf("The nearest number is = %d.\n", nearestNumber);
        }
    }
    return 0;
}