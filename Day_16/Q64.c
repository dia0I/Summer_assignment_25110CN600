#include <stdio.h>

int main() {
    int size, j=0;
    //input array
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements of array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int a[size];

    for(int i=0; i<size; i++)
    {
        int count = 0;
        int encountered = 0;

        for(int k=0; k<i; k++)
        {
            if(arr[k]==arr[i])
            {
                encountered++;
                break;
            }
        }

        if(encountered==0)
        {
            a[j]=arr[i];
            j++;
        }
            
        
        /*for(int j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }

        if(count==0)
        {
            a[j]=arr[i];
            j++;
        }*/
    }
    printf("Modified array without duplicates: ");
    for(int i=0; i<j; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}