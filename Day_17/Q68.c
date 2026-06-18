//print common elements (contains duplicate elements)
#include<stdio.h>

int main()
{
    int size1, size2,flag=0;

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

    printf("Common elements:\n");
    for(int i=0; i<size1; i++)
    {
        for(int j=0; j<size2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf("%d ",arr1[i]);
                flag=1;
                break;
            }
        }
    }

    
    if(flag==0)
    {
        printf("No common element.");
    }
    

}