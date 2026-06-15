//move zeroes to the end 
#include<stdio.h>

int main(){
    int size,j=0;
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
        if(arr[i] != 0)
        {
            a[j]=arr[i];
            j++;
        }
    }
    for(int i=j; i<size; i++)
    {
        a[i] = 0;
    }

    printf("Modified array: \n");

    for(int i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
}
    