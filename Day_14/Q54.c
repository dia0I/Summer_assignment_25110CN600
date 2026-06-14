// find frequency of an element in an array
#include<stdio.h>

int main(){
    int arr[100],size,count = 0;

    //input array
    printf("Enter size of array: ");
    scanf("%d",&size);

    printf("Enter elements of array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    //count frequency
    int n;
    printf("Enter the element to count its frequency: ");
    scanf("%d",&n);
    for(int i=0; i<size; i++)
    {
        if(arr[i]==n)
        
            count++;
    }
    //display result
    printf("Frequency of element %d : %d",n,count);

    return 0;

}