#include<stdio.h>

int main(){
    int size,sum=0;
    // input array
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements of array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    // calculate sum
    for(int i=0; i<size; i++)
    {
        sum += arr[i];
    }
    // calculate average    
    int avg = sum / size;
    printf("Sum of elements of array : %d\n",sum);
    printf("Average of array : %d",avg);

}