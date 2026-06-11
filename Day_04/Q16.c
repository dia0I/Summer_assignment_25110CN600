#include<stdio.h>
#include<math.h>

int main(){
    int i, n1,n2,rem1,rem2,start,end;
    printf("Enter the range :\n");
    printf("Enter start: ");
    scanf("%d",&start);
    printf("Enter end: ");
    scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
        int sum =0,count=0;
        n1= i;
        while(n1 != 0)
        {
            rem1 = n1%10;
            count += 1;
            n1 = n1/10;
        }
        n2 =i;
        while (n2 != 0)
        {
            rem2 = n2%10;
            sum += pow(rem2,count);
            n2 = n2/10;   
        }

        if (sum==i)
        {
            printf("%d ",i);

        }
        
    }
}
