//rotate array left by n position.
#include<stdio.h>

int main(){
    int size,n;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter elements of array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Rotate the array left by : ");
    scanf("%d",&n);
    n = n%size;
    int a[size];

    for (int i = 0; i < size ; i++)
    {
        if((i+n) >= size)
        {
            a[i] = arr[i+n-size];
        }
        else 
        {
            a[i] = arr[i+n];
        }

    }
    printf("Rotated array: \n");
    for(int i=0; i<size; i++)
    {
        printf("%d ", a[i]);

    }
        
}
    