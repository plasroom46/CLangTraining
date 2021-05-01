#include <stdio.h>

int main()
{
    int num[5];
    printf("Please input five integers: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (num[j] > num[j + 1]) // 如果左邊比右邊大就交換
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}