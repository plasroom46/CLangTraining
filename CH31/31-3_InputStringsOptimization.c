#include <stdio.h>
#include <string.h>

int main()
{
    char raw[5000];
    char *str[100];//紀錄字串位置
    char input[50];
    int size = 0;//字串長度計算
    int len = 0;
    while (1)
    {
        scanf("%s", input);
        if (strcmp(input, "END") == 0)
            break;
        else
        {
            str[len] = &raw[size]; // raw + size
            strcpy(str[len], input);
            size += strlen(input) + 1;
            len++;
        }
    }
    printf("------------\n");
    for (int i = 0; i < len; i++)
    {
        printf("%s ", str[i]);
    }
    printf("\n(%d %d)",len, size);
    return 0;
}