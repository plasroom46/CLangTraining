#include <stdio.h>
#include <stdlib.h>

// 此作法效率不高
int main()
{

    int *numbers = 0; // 0表示空指標(NULL)
    int length = 0;
    while (length < 10)
    {
        int input;
        scanf("%d", &input);
        if (input == 0)
        {
            break;
        }
        else
        {
            int *larger = (int *)malloc(sizeof(int) * (length + 1));
            for (int i = 0; i < length; i++)
            {
                larger[i] = numbers[i];
            }
            free(numbers);
            numbers = larger;
            numbers[length] = input;
            length++;
        }
    }
    printf("Numbers: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}