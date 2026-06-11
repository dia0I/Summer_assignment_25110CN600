#include <stdio.h>
#include <math.h>

int check_armstrong (int num)
{
    int n1,n2,rem,count=0,sum=0;
    n1 = num;
    
    while(n1 != 0)
    {
        count ++;
        n1=n1/10;
    }
    n2= num;
    
    while (n2 != 0)
    {
        rem = n2%10;
        sum += pow(rem, count );
        n2 = n2/10;
    }
    if(num==sum)
        printf("%d is an armstrong number",num);
    else 
        printf("%d is not an armstrong number",num);
}

int main() {
    int a,result;
    //input
    printf("Enter number : ");
    scanf("%d",&a);
    
    //output 
    check_armstrong (a);

    return 0;
}