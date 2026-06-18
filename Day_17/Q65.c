// merge arrays
#include<stdio.h>

int main(){
    int size1, size2, size3,j=0,k=0;

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

    //merged array
    size3 = size1+size2;
    int arr3[size3];
    for(int i=0; i<size1; i++)
    {
        arr3[i]=arr1[i];
        j++;
    }

    for(int i=j; i<size3; i++)
    {
        arr3[i]=arr2[k];
        k++;
    }

    printf("Merged array:\n");
    for(int i=0; i<size3; i++)
    {
        printf("%d ", arr3[i]);
    }


}