#include <stdio.h>
int main()
{
    int side1, side2, side3, t;
    printf("Please enter the lengths(three positive integers): ");
    scanf("%d%d%d", &side1, &side2, &side3);

    if (side2 < side1)
    {
        t = side1;
        side1 = side2;
        side2 = t;
    }
    if (side3 < side1)
    {
        t = side1;
        side1 = side3;
        side3 = t;
    }
    if (side3 < side2)
    {
        t = side2;
        side2 = side3;
        side3 = t;
    }

    if (side1 == side3)
        printf("Regulartriangle.\n");
    if (side1 == side2 || side2 == side3)
        printf("Isosceles triangle.\n");
    if (side1 * side1 + side2 * side2 == side3 * side3)
        printf("Rectangular triangle.\n");
    return 0;
}
