#include <stdio.h>

int main()
{
    int a, b, c, t;
    printf("Please enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Before: %d %d %d\n", a, b, c);
    if (b < a)
    {
        t = a;
        a = b;
        b = t;
    }
    if (c < a)
    {
        t = a;
        a = c;
        c = t;
    }
    if (c < b)
    {
        t = b;
        b = c;
        c = t;
    }
    printf("After: %d %d %d\n", a, b, c);
    return 0;
}