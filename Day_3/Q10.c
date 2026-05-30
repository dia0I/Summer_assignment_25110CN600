#include<stdio.h>

int main(){
    int start,end;
    float rem;
    printf("Enter the range\n");
    printf("Start:");
    scanf("%d",&start);
    printf("End:");
    scanf("%d",&end);
    printf("Prime numbers in range %d to %d :\n",start,end);
    for(int i=start;i<=end;i++)
    {
        if(i==0||i==1)
        {
            continue;
        }
        else if (i==2)
        {
            printf("%d ",i);
        }
        else 
        {
            for(int j=2;j<i;j++)
            {
                rem = i%j;
                if (rem==0)
                {
                    break;
                }
            }
            if (rem !=0 )
            {
                printf("%d ",i);
            }
        }
    }
}