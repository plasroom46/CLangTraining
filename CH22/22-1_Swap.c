#include <stdio.h>

void Swap(int *, int *);
int main()
{
    int a = 3;
    int b = 10;
    Swap(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
void Swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}