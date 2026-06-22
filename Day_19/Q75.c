// Transpose of a matrix
#include <stdio.h>

int main()
{
    int r, c;
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
    int trans_mat[c][r];
    for (int i = 0; i <= c; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            trans_mat[i][j] = mat[j][i];
        }
    }

    printf("Transposed matrix:\n");
    for (int i = 1; i <= c; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            printf("%d ", trans_mat[i][j]);
        }
        printf("\n");
    }
}