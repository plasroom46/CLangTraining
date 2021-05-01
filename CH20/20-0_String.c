#include <stdio.h>

void StrPrint(char str[])
{
    for (int i = 0; str[i]!='\0'; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}


int main()
{
    char str[] = "Hello World";
    StrPrint(str);
    printf("%s\n", str);
    return 0;
}