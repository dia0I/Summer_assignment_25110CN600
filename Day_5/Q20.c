#include <stdio.h>

int main()
{
    int number, largest_PF = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 2; i <= number; i++)
    {
        if (number % i == 0)
        {
            int divisorCount = 0;

            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    divisorCount++;
                }
            }

            if (divisorCount == 2)
            {
                largest_PF = i;
            }
        }
    }

    printf("Largest Prime Factor = %d\n", largest_PF);

    return 0;
}