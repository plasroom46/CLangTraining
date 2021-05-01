#include <stdio.h>

int main()
{
    int v[5] = {1, 2, 3, 4, 5};
    // for (int *n = v; n != v + 5;n++)
    // {
    //     printf("%d\n", *n);
    // }
    int *n = v;
    while (n != v + 5)
    {
        printf("%d\n", *n++);
    }
    return 0;
}