#include <stdio.h>

int check_prime(int n)
{
    int flag = 0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag = 1;
            break;
        }

    }
    if(flag==1 && n!=2)
        printf("%d is not a prime number",n);
    else
        printf("%d is a prime number",n);

}

int main() {
    int n,result;
    printf("Enter number: ");
    scanf("%d",&n);

    check_prime(n);

    return 0;
}