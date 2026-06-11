//Recursive Factorial
#include<stdio.h>
int fact(int n)
{
    if(n==0||n==1)
        return 1;
    else 
        return n*fact(n-1);
}
int main(){
    int n,result;
    printf("Enter number to find factorial: ");
    scanf("%d",&n);
    result = fact(n);
    printf("%d",result);
}