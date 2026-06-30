// voting eligibility criteria

#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");

    if (scanf("%d", &age) != 1)
        printf("Invalid input!");
    else if (age < 0)
        printf("Invalid input.");
    else if (age >= 18)
        printf("You're eligible for voting!");
    else
        printf("You're not eligible for voting!");

    return 0;
}