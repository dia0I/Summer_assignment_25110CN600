// row-wise sum
#include <stdio.h>

int main()
{
    int r, c, i, j;
    printf("Enter row and column of matrix:");
    scanf("%d %d", &r, &c);
    int mat[r][c];

    printf("Enter elements:");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        int row_sum = 0;
        for (j = 0; j < c; j++)
        {
            row_sum += mat[i][j];
        }
        printf("Row %d sum: %d\n", i + 1, row_sum);
    }
}