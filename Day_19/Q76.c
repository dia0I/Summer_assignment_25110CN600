// Program to find sum of diagonal elements
#include <stdio.h>

int main()
{
    int r, c, P_sum = 0;
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

    if (r != c)
    {
        printf("Diagonal calculations can only be performed on square matrix.");
    }
    else
    {
        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                if (i == j)
                {
                    P_sum += mat[i][j];
                }
            }
        }
        printf("Sum of principal diagonal elements: %d", P_sum);
    }
}
