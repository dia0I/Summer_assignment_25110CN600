#include<stdio.h>

int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter elements of array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Reversed Array:\n");
    for(int i=size-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}