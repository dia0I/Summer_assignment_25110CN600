#include<stdio.h>

int main(){
    int num,n,rem,sum=0;
    printf("Enter the number :");
    scanf("%d",&num);
    n = num;
    
    while(n!=0)
    {
        int fact=1;
        rem = n%10;
        for(int i=1;i<=rem;i++)
        {
            fact *= i;
        }
        sum += fact;
        n = n/10;
    }

    if(num==0)
    {
        printf("%d is not a strong number.",num);
    }
    else 
    {
        if (sum==num && num!=0)
        {
            printf("%d is a strong number",num);
        }
        else 
        {
            printf("%d is not a strong number",num);
        }

    }
    
    return 0;
}