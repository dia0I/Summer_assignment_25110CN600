//intersection of two arrays
#include<stdio.h>

int main()
{
    int size1, size2,n=0,flag=0;

    //input first array
    printf("Enter size of first array: ");
    scanf("%d",&size1);
    int arr1[size1];
    printf("Enter elements: ");
    for(int i=0; i<size1; i++)
    {
        scanf("%d",&arr1[i]);
    }

    //input second array
    printf("Enter size of second array: ");
    scanf("%d",&size2);
    int arr2[size2];
    printf("Enter elements: ");
    for(int i=0; i<size2; i++)
    {
        scanf("%d",&arr2[i]);
    }

    int arr3[size1+size2];

    for(int i=0; i<size1; i++)
    {
        int encountered=0;

        for(int k=0; k<i; k++)
        {
            if(arr1[i]==arr1[k])
            {
                encountered=1;
                break;
            }
        }

        if(encountered==1)
            continue;
            
        for(int j=0; j<size2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                arr3[n]=arr1[i];
                n++;
                flag=1;
                break;
            }
        }
    }

    printf("Intersection of two entered arrays:\n");
    if(flag==0)
    {
        printf("No common element.");
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            printf("%d ",arr3[i]);
        }
    }
    

}