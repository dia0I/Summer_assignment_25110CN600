#include<stdio.h>

int fibo(int n)
{
    int first_term=0,sec_term=1,next_term;
    printf("fibonacci series: \n %d %d ",first_term,sec_term);
    for(int i=3;i<=n;i++)
    {
        next_term = first_term + sec_term;
        printf("%d ",next_term);
        first_term = sec_term;
        sec_term = next_term;
    }
}

int main(){
    int n;
    printf("Enter number of terms required in series: ");
    scanf("%d",&n);

    fibo(n);

    return 0;
}