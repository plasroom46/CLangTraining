#include <stdio.h>

int main()
{
    int a, b, c, d, max;
    printf("Please enter four integers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    max = a;
    if (b > a)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;
    printf("The max number is %d.\n", max);
    return 0;
}