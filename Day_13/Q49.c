#include<stdio.h>

int main(){
    int arr[100];
    int size;
    printf("Enter size of array :");
    scanf("%d",&size);
    printf("Enter elements of array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array is : \n");
    for(int i=0; i<size ; i++)
    {
        printf("%d ", arr[i]);
    }
}