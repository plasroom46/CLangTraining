#include <stdio.h>

int main()
{
    int number;
    printf("Please enter the number of customers: ");
    scanf("%d", &number);
    int total = number * 300;
    if (total >= 3000)
        total *= 0.8;
    printf("Total: %d.\n", total);
}