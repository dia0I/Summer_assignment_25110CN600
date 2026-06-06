#include<stdio.h>
#include<math.h>

int main(){
    int num,n,sum=0,prod,rem,i=0;
    printf("Enter the number(binary): ");
    scanf("%d",&num);
    n = num;

    while(n!=0)
    {
        rem = n%10;
        prod = pow(2,i)*rem;
        sum += prod;
        i++;
        n=n/10;
    }
    printf("%d in decimal :%d",num,sum);
    return 0;
}