#include <stdio.h>

int main()
{

    int numbers[10];
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