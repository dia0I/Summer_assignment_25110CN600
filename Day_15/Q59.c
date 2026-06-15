//rotate array right by n position.
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
    printf("Rotate the array right by : ");
    scanf("%d",&n);
    n = n%size;
    int a[size];

    for (int i = 0; i < size ; i++)
    {
        if((i+n) >= size)
        {
            a[i+n-size] = arr[i];
        }
        else 
        {
            a[i+n] = arr[i];
        }

    }
    printf("Rotated array: \n");
    for(int i=0; i<size; i++)
    {
        printf("%d ", a[i]);

    }
        
}
    