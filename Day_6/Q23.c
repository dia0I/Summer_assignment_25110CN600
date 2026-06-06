// To count number of set bits
#include<stdio.h>
int main(){
    int num,n,rem,i=0,arr[32],set_bits;

    printf("Enter number(decimal): ");
    scanf("%d",&num);
    n=num;

    while(n!=0)
    {
        rem = n%2;
        if (rem==1)
        {
            set_bits++;
        }
        arr[i]=rem;
        i++;
        n = n/2;
    }

    printf("Number of set bits in %d : %d",num,set_bits);
    return 0;


}