// Second greatest element 
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

    //sorting array through bubble sorting technique
    int temp;
    for(int i=0; i< size-1; i++)
    {
        for(int j=0 ; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }

        }
    }
    
    //display second largest element (second last element of sorted array)
    int second_max = arr[size-2];
    printf("Second greatest element of array: %d",second_max);

    
}