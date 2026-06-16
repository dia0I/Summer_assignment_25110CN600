// Print reversed array
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
    for(int i=size-1; i>=0; i--)
    {
        a[j] = arr[i];
        j++;
    }
    
    printf("Reversed array: \n");
    for(int i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}