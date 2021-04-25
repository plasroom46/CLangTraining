#include <stdio.h>

int main()
{
    int i, sum=0;
    printf("Please enter the first integer: ");
    scanf("%d", &i);
    sum += i;
    printf("Please enter the second integer: ");
    scanf("%d", &i);
    sum += i;
    printf("Please enter the third integer: ");
    scanf("%d", &i);
    sum += i;
    printf("sum is %d.\n", sum);
    return 0;
}
