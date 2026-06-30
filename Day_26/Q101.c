#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, num, attempts = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("-----NUMBER GUESSING NAME-----\n");
    printf("I have chosen a number between 1 and 100\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &n);
        attempts++;

        if (n < num + 5 && n > num - 5 && num != n)
            printf("Very close! Try again\n");
        else if (n > num && n < 101)
            printf("Too high, Try again!\n");
        else if (n < num && n > 0)
            printf("Too low, Try again!\n");
        else if (n == num)
        {
            printf("Congratulations! you've guessed it right\n");
            printf("Attempts taken: %d ", attempts);
            break;
        }
        else
            printf("invalid input.");
    } while (num != n);

    return 0;
}