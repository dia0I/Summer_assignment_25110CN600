#include<stdio.h>

int main(){
    int arr[100];
    int size, odd_count=0, even_count=0;
    //input array
    printf("Enter size of array :");
    scanf("%d",&size);
    printf("Enter elements of array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    //calculate even and odd count
    for(int i=0; i<size; i++)
    {
        if(arr[i]%2==0)
        {
            even_count ++;
        }
        else 
        {
            odd_count++;
        }
    }
    //display even and odd count
    printf("number of even elements in array : %d\n",even_count);
    printf("number of odd elements in array : %d",odd_count);
    
    

}