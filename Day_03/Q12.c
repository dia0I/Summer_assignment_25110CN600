#include<stdio.h>

int main(){
    int a,b,count=0,LCM;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    for(int i=1;(i<=a && i<=b);i++)
    {
        if ((a%i==0)&&(b%i==0))
        {
            count = i;
        }
    }
    LCM = (a*b)/count;
    printf("LCM of %d and %d is: %d",a,b,LCM);
}