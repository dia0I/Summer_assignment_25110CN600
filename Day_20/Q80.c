// column-wise sum
#include <stdio.h>

int main()
{
    int r, c, i, j;
    printf("Enter row and column of matrix:");
    scanf("%d %d", &r, &c);
    int mat[r][c];

    printf("Enter elements:");
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 1; i <= c; i++)
    {
        int col_sum = 0;
        for (j = 1; j <= r; j++)
        {
            col_sum += mat[j][i];
        }
        printf("col %d sum: %d\n", i, col_sum);
    }
}