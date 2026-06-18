//union of arrays
#include<stdio.h>

int main(){
    int size1, size2, size3,n=0;

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

    //merge two arrays without duplicates
    size3 = size1+size2;
    int arr3[size3];
    for(int i=0; i<size1; i++)
    {
        arr3[i]=arr1[i];
        n++;
    }

    for(int j=0; j<size2; j++)
    {
        //check if the element is already present in the array
        int added=0;
        for(int k=0; k<n; k++)
        {
            if(arr2[j]==arr3[k])
            {
                added=1;
                break;
            }
        }
        if(added==1)
        {
            arr3[n]=arr2[j];
            n++;
        }
    }

    //print resulting array    
    printf("Intersection of two entered arrays:\n");
    for(int i=0; i<n;i++)
    {
        printf("%d ",arr3[i]);
    }

}