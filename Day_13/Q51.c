#include<stdio.h>

int main(){
    int arr[100];
    int size;
    
    //input array
    printf("Enter size of array :");
    scanf("%d",&size);
    printf("Enter elements of array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    //calculate largest element
    int max = arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    // display largest element
    printf("Largest element of array : %d",max);
    
}