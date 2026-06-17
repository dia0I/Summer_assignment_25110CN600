// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n, max_freq = 0;
    //input array
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int element= arr[0];
    for(int i=0; i<n; i++)
    {
        int printed = 0;
        int freq = 1;
        // to check if the element has already been encountered 
        for(int k=0; k<i; k++)
        {
           if(arr[i]==arr[k]) 
           {
               printed = 1;
               break;
           }
        }
        
        if (printed==1)
            continue;
        
        //check frequency 
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]==arr[i])
            {
                freq++;
                
            }
        }
        if(freq> max_freq)
        {
            max_freq = freq;
            element= arr[i];
        }
            
    }
    printf("element with max frequency: %d", element);

    return 0;
}