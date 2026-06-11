#include <stdio.h>

int check_palindrome (int num)
{
    int rem, rev=0, n;
    n = num;

    while(n != 0)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    if ( rev == num)
        printf("%d is a palindrome number. ",num);
    else
        printf("%d is not a plaindrome number.",num);
}

int main() {
    int a,result;
    //input
    printf("Enter number : ");
    scanf("%d",&a);

    //output 
    check_palindrome(a);

    return 0;
}