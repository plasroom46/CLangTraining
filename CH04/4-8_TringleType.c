#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Please enter the lengths(three positive integers)(small to big): ");
    scanf("%d%d%d", &side1, &side2, &side3);
    if (side1 == side3)
        printf("Regulartriangle.\n");
    if (side1 == side2 || side2 == side3)
        printf("Isosceles triangle.\n");
    if (side1 * side1 + side2 * side2 == side3 * side3)
        printf("Rectangular triangle.\n");
    return 0;
}
