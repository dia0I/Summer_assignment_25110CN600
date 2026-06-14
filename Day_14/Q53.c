// linear search
#include<stdio.h>

int main(){
    int arr[100];
    int size,n,flag=0;
    
    //input array
    printf("Enter size of array :");
    scanf("%d",&size);
    printf("Enter elements of array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d",&n);

    int i;
    for(i=0; i<size; i++)
    {
        if(arr[i]==n)
        {
            flag = 1;
            break;
        }
    }

    if(flag==1)
        printf("element found at position : %d\nindex : %d",i+1,i);
    else 
        printf("Element not found.");

    return 0;
}