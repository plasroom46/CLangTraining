#include <stdio.h>

int main()
{
    int i1;
    int i2;
    int sum;
    printf("Please enter the first integer: ");
    scanf("%d", &i1);
    printf("Please enter the second integer: ");
    scanf("%d", &i2);
    sum = i1 + i2;
    printf("sum is %d.\n", sum);
    return 0;
}
