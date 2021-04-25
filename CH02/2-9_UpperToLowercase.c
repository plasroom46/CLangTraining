#include <stdio.h>

int main()
{
    char c;
    printf("Please intput uppercase: ");
    scanf("%c", &c);
    c = c + ('a'-'A'); // ('a'-'A')=32
    printf("The lowercase: %c.\n", c);
    return 0;
}