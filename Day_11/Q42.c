#include <stdio.h>

int max(int a,int b)
{
    if (a>b)
        return a;
    else
        return b;
}

int main() {
    int a,b,result;
    //input
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);
    //output 
    result = max(a,b);
    printf("Greatest of %d and %d : %d",a,b, result);

    return 0;
}