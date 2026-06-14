#include<stdio.h.>

int main(){
    int n,flag=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    //input array
    int arr[n];
    printf("Enter elements of an array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Duplicate elements are:\n");

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        int already_Printed = 0;
        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                already_Printed = 1;
                break;
            }
        }

        if (count > 0 && !already_Printed)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}