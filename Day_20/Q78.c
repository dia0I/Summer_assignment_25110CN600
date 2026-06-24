// Symmetric matrix
#include <stdio.h>

int main()
{
    int r, c, flag = 0;
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
    int trans_mat[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            trans_mat[i][j] = mat[j][i];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] != trans_mat[i][j])
            {
                flag = 1;
            }
        }
    }

    if (flag == 1)
    {
        printf("Matrix is not Symmetric.");
    }
    else
    {
        printf("Matrix is symmetric.");
    }
}