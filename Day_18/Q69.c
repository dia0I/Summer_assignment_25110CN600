//Bubble sorting
#include<stdio.h>

int main(){
    int size,temp; 
    //input array
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements of array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //bubble sorting

    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    // print sorted array
    printf("Array sorted in increasing order:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
}