//Find missing number in an array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements of array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    

    int orig_sum;
    orig_sum = n*(n+1)/2;

    int arr_sum=0;
    for(int i=0; i<n; i++)
    {
        arr_sum += arr[i];
    }

    int missing_num;
    missing_num = orig_sum-arr_sum;

    
    printf("Missing number: %d ",missing_num);
}