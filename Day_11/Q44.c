
#include <stdio.h>

int factorial(int n)
{
    int mul = 1;
    for(int i=1; i<=n; i++)
    {
        mul *= i;
    }
    return mul;
}

int main() {
    int a,result;
    //input
    printf("Enter number : ");
    scanf("%d",&a);
    //output 
    result = factorial(a);
    printf("Factorial %d = %d",a, result);

    return 0;
}