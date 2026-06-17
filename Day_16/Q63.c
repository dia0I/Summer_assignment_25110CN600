// find pair with required sum
#include<stdio.h>

int main(){
    int size, req_sum, calc_sum,found=0;
    //input array
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements of array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    // check pairs 
    printf("Enter required sum: ");
    scanf("%d",&req_sum);

    printf("Pairs with required sum:\n");

    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            calc_sum = arr[i]+arr[j];
            if(calc_sum==req_sum)
            {
                found = 1;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    if(found==0)
        printf("No pair exists.");

    return 0;
}
