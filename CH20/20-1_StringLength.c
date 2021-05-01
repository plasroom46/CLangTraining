#include <stdio.h>

int StrLen(char str[])
{
    int i = 0;
    while (str[i]!='\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char str[15] = "Hello World"; // 不足為定義的地方會補 '\0'
    printf("Size of str: %zu\n", sizeof(str));
    printf("Length: %d\n", StrLen(str));
    return 0;
}