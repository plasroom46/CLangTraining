#include <stdio.h>

int main()
{
    int intVar = 3;
    void *voidVar = &intVar;
    int *intPtr = (int *)voidVar;

    printf("%d\n", *intPtr);
    // printf("%d\n", *voidVar); // 編譯失敗

    double *doublePtr = (double *)voidVar; // 變成 0.00000

    printf("%f\n", *doublePtr);
    return 0;
}