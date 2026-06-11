#include<stdio.h>

int main(){
    int n;
    float rem;
    printf("Enter number: ");
    scanf("%d",&n);
    if (n==2)
    {
        printf("Number is prime.");

    }
    else 
    {
        for(int i=2;i<n;i++)
        {
            rem = n%i;
            if (rem==0)
            {
                break;
            }
            
            
        }
        if (rem!=0)
        {
            printf("Number is prime.");
        }
        else 
            printf("Number is not prime.");
    }
}