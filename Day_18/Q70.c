//Selection sorting
#include<stdio.h>

int main()
{
    int size,temp,min_idx;

    //input and store array
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements of array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    // Selection sort
    for(int i=0; i<size-1; i++)
    {
        min_idx=i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[min_idx]>arr[j])
            {
                min_idx=j;
            }
        }
        if(min_idx != i)
        {
            temp = arr[i];
            arr[i]=arr[min_idx];
            arr[min_idx]=temp;
        }
        
    }

    //print sorted array
    printf("Sorted array:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}