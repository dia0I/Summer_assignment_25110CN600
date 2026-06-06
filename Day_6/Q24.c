//To calc x^n without using pow()
#include<stdio.h>
int main(){
    int x,n,prod=1;
    printf("Enter base : ");
    scanf("%d",&x);
    printf("Enter positive power : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        prod *= x;
    }
    printf("%d^%d: %d",x,n,prod);
}