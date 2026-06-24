// Program to find sum of diagonal elements
#include <stdio.h>

int main()
{
    int r, c, r_sum = 0;
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

    if (r != c)
    {
        printf("Diagonal calculations can only be performed on square matrix.");
    }
    else
    {
        for (int i = 0; i < r; i++)
        {
            r_sum += mat[i][i];
        }
        printf("Sum of principal diagonal elements: %d", r_sum);
    }
}
