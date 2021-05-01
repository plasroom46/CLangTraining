#include <stdio.h>

void Sort(int *, int *);
void Swap(int *, int *);

int main()
{
    int a = 10;
    int b = 3;
    Sort(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
void Sort(int *a, int *b)
{
    if (*a > *b)
    {
        Swap(a, b); // = Swap(*&a, *&b);
    }
}

void Swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}