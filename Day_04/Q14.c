#include<stdio.h>
int main(){
    int n,t1=0,t2=1,next_term;
    printf("Enter term required in the series:");
    scanf("%d",&n);
    for(int i=3;i<=n;i++)
    {
        next_term=t1+t2;
        if(i==n)
        {
            printf("%d",next_term);
        }

        t1=t2;
        t2=next_term;

    }
    return 0;
}