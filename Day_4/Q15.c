#include<stdio.h>
#include<math.h>

int main()
{
    int num,n1,n2,rem1,rem2,count=0,sum=0;
    printf("Enter the number to be checked:");
    scanf("%d",&num);
    n1 = num;
    while(n1 != 0)
    {
        rem1 = n1%10;
        count += 1;
        n1 = n1/10;
    }
    n2=num;
    while (n2 != 0)
    {
        rem2 = n2%10;
        sum += pow(rem2,count);
        n2 = n2/10;   
    }
    if (sum==num)
    {
        printf("The number is Armstrong number.");

    }
    else 
    {
        printf("The number is not an Armstromg number.");
    }
    return 0;
}