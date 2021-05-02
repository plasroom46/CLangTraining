#include <stdio.h>


// 此作法無效，會發生未定義行為
int main()
{

    int *numbers;
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
            int larger[length + 1]; 
            for (int i = 0; i < length; i++)
            {
                larger[i] = numbers[i];
            }
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