#include<stdio.h>

int check_perfectnum(int num)
{
    int sum=0;
    for(int i=1; i<num; i++)
    {
        if(num%i==0)
        {
            sum += i;
        }
    }
    
    if(sum==num)
    {
        printf("%d is a perfect number.",num);
    }
    else 
    {
        printf("%d is not a perfect number.",num);
    }
}
int main(){
    int n;
    printf("Enter the number to be checked: ");
    scanf("%d",&n);

    check_perfectnum(n);

}