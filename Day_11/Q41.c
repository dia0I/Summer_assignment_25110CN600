#include <stdio.h>

int sum(int a ,int b)
{

    int add;
    add = a+b;
    return add;
}

int main() {
    int n1, n2, result;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);

    result = sum(n1,n2);
    printf("%d+%d=%d", n1,n2, result);

    return 0;
}