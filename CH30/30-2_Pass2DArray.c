#include <stdio.h>

void Print(int **v, int height, int width)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int v[3][3] =
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9},
        };
    int *p[3] = {v[0], v[1], v[2]};
    Print(p, 3, 3); // (int**)=(int *[3])
    return 0;
}