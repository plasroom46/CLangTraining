#include <stdio.h>

void StrRead(char[], int);

int main()
{
    char str[15];
    StrRead(str, 14);
    printf("%s\n", str);
    return 0;
}

void StrRead(char str[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%c", &str[i]);
        if (str[i] == '\n')
        {
            break;
        }
    }
    str[i] = '\0';
}