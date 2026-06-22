//Recursive reverse number

#include <stdio.h>

int reverse_of_num(int n, int rev) {
    if (n == 0)
        return rev;
    else
        return reverse_of_num(n / 10, rev * 10 + n % 10);
}

int main() {
    int n,result;

    printf("Enter a number: ");
    scanf("%d", &n);
    result = reverse_of_num(n, 0);

    printf("Reversed number = %d",result);

    return 0;
}