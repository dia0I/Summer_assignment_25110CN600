#include<stdio.h>

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Factors of %d :\n",n);

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }
    if (n==0)
    {
        printf("Every non zero number is a factor of zero.");
    }
    return 0;
}