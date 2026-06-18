//addition of two matrix
#include<stdio.h>

int main(){
    int r1,c1,r2,c2;

    //input first array
    printf("Enter row and column of first matrix: ");
    scanf("%d %d",&r1,&c1);
    int arr1[r1][c1];
    printf("Enter elements: ");
    for(int i=1; i<=r1; i++)
    {
        for(int j=1; j<=c1; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    //input second array
    printf("Enter row and column of second matrix: ");
    scanf("%d %d",&r2,&c2);
    int arr2[r2][c2];
    printf("Enter elements: ");
    for(int i=1; i<=r2; i++)
    {
        for(int j=1; j<=c2; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    int arr3[r1][c1];

    if(r1!=r2|| c1!=c2)
    {
        printf("The matrices cannot be added as they have different sizes.");
    }
    else 
    {
        for(int i=1; i<=r1; i++)
        {
            for(int j=1; j<=c1; j++)
            {
                int sum = arr1[i][j]+arr2[i][j];
                arr3[i][j] = sum;
            }
        }

        printf("Resulting array:\n");
        for(int i=1; i<=r1; i++)
        {
            for(int j=1; j<=c1; j++)
            {
                printf("%d ", arr3[i][j]);
            }
            printf("\n");
        }
    }

    

}