//Recursive sum of digits

#include <stdio.h>

int sum_of_digits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sum_of_digits(n / 10);
}

int main() {
    int n,result;

    printf("Enter a number: ");
    scanf("%d", &n);
    result = sum_of_digits(n);

    printf("Sum of digits of %d = %d\n", n,result);

    return 0;
}