//binary search
#include<stdio.h>

int main()
{
    int size,n;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements of array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d",&n);
    //Binary Search
    int high = size-1;
    int low = 0;
    int mid;

    while (low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid]==n)
        {
            printf("Element %d found at index : %d",n,mid);
            break;
        }
        else if(arr[mid]>n)
        {
            high = mid-1;
        }
        else if(arr[mid]<n)
        {
            low = mid+1;
        }
        else
        {
            printf("Element not found.");
        }

    }


}