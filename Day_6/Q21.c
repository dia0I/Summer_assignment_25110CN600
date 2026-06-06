#include<stdio.h>
int main(){
    int num,n,rem,i=0,arr[32];

    printf("Enter number(decimal): ");
    scanf("%d",&num);
    n=num;

    while(n!=0)
    {
        rem = n%2;
        arr[i]=rem;
        i++;
        n = n/2;
    }
    
    printf("%d in binary :\n",num);
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
    return 0;


}