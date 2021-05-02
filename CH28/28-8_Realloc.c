#include <stdio.h>
#include <stdlib.h>

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
            numbers = (int *)realloc(numbers, sizeof(int) * (length + 1));
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