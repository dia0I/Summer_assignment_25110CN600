#include<stdio.h.>

int main(){
    int size,n,flag=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    //input array
    int arr[size];
    printf("Enter elements of an array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d",&n);
    
    // searching
    int i;
    for(i=0; i<size; i++)
    {
        if(arr[i]==n)
        {
            flag = 1;
            break;
        }

    }
    // output
    
    if (flag==1)
    {
        printf("Element %d found at position : %d\nindex: %d",n,i+1,i);
    }
    else 
    {
        printf("Element not found.");
    }

}