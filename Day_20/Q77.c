// Multiplcation of matrices
#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of matrix: ");
    for (int i = 1; i <= r1; i++)
    {
        for (int j = 1; j <= c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of second matrix: ");
    for (int i = 1; i <= r2; i++)
    {
        for (int j = 1; j <= c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if (c1 != r2)
    {
        printf("Multiplication of the matrices is not possible.");
    }
    else
    {
        for (int i = 1; i <= r1; i++)
        {
            for (int j = 1; j <= c2; j++)
            {
                c[i][j] = 0;
                for (int k = 1; k <= c1; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }
    printf("Resulting matrix:\n");
    for (int i = 1; i <= r1; i++)
    {
        for (int j = 1; j <= c2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}