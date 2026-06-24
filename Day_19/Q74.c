// Subtract matrices
#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    // input first matrix
    printf("Enter row and col of first matrix: ");
    scanf("%d %d", &r1, &c1);
    int mat1[r1][c1];
    printf("Enter elements: ");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    // input second matrix
    printf("Enter row and col of second matrix: ");
    scanf("%d %d", &r2, &c2);
    int mat2[r2][c2];
    printf("Enter elements: ");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    if (r1 != r2 || c1 != c2)
    {
        printf("The two matrices cannot be subtracted as they have different size.");
    }
    else
    {
        int mat3[r1][c1];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                int sub = mat1[i][j] - mat2[i][j];
                mat3[i][j] = sub;
            }
        }

        printf("Resulting matrix:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("%d ", mat3[i][j]);
            }
            printf("\n");
        }
    }
}