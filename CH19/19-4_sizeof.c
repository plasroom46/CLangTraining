#include <stdio.h>

int main()
{
    int v[3] = {1, 2, 3};
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of v[0]: %zu\n", sizeof(v[0]));
    printf("Size of v: %zu\n", sizeof(v)); // 函數傳遞的結果會不同
    printf("Length of v: %zu\n", sizeof(v) / sizeof(v[0]));
    return 0;
}