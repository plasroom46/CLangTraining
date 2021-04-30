#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    int count = 0;
    float average;
    printf("Please enter the numbers (quit: 0): \n");
    scanf("%d", &number);
    while (number != 0)
    {
        sum += number;
        count++;
        scanf("%d", &number);
    }
    if (count!=0)
    {
        average = (float)sum / count;
        printf("The average is %f.\n", average);
    }
    else
        printf("The average is N/A.\n");
    return 0;
}