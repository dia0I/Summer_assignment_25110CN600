// ATM SIMULATION SYSTEM

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Adds a valid deposit amount to the account balance.
float deposit(float balance)
{
    float amount;
    int ch;
    // To handle the case when the user enters a non-numeric value.
    while (1)
    {
        printf("Enter the amount: ");

        if (scanf("%f", &amount) != 1)
        {
            printf("Invalid input! Try again.\n");

            while ((ch = getchar()) != '\n' && ch != EOF)
                ;

            continue;
        }

        if (amount <= 0)
        {
            printf("Amount cannot be negative or zero! Try again.\n");
            continue;
        }

        balance += amount;
        printf("Amount deposited successfully.\n");
        printf("Updated balance: %.2f\n", balance);

        return balance;
    }
}
// FUNCTION TO WITHDRAW AMOUNT
float withdrawal(float balance)
{
    float amount;
    int ch;
    // To handle the case when the user enters a non-numeric value.
    while (1)
    {
        printf("Enter the amount: ");

        if (scanf("%f", &amount) != 1)
        {
            printf("Invalid input! Try again.\n");

            while ((ch = getchar()) != '\n' && ch != EOF)
                ;

            continue;
        }

        if (amount < 0)
        {
            printf("Amount cannot be negative! Try again.\n");
            continue;
        }

        if (amount > balance)
        {
            printf("Insufficient balance! Try again.\n");
            continue;
        }

        balance -= amount;
        printf("Amount withdrawn successfully.\n");
        printf("Updated balance: %.2f\n", balance);

        return balance;
    }
}

int main()
{
    float balance = 50000.00;
    int pin = 2365;
    int entered_pin, opt;
    char loop_continue;
    int flag = 0;

    do
    {
        printf("WELCOME TO THE ATM SIMULATOR\n");
        printf("-------MENU-------\n");
        printf("1.Check balance\n2.Deposit amount\n3.Withdraw amount\n4.Exit\n");
        printf("Enter the option number: ");
        scanf("%d", &opt);
        int attempts = 0;

        // ALLOWS USER TO ENTER THE PIN 3 TIMES IF IT IS NOT CORRECT, BLOCKS THE CARD AFTER 3 ATTEMPTS.
        while (attempts < 3)
        {
            if (opt == 4)
            {
                printf("Thank you for using our ATM services. Goodbye!\n");
                exit(0);
            }
            printf("\nEnter pin : ");
            scanf("%d", &entered_pin);
            attempts++;

            if (pin == entered_pin)
                break;
            else if (attempts == 3)
            {
                printf("Too many incorrect attempts. Your card has been blocked.\n");
                break;
            }
            else
            {
                printf("Invalid pin, you have %d more attempt\n", 3 - attempts);
            }
        }
        // Execute the selected ATM operation after successful PIN verification.
        if (entered_pin == pin)
        {
            switch (opt)
            {
            case 1:
                printf("balance : %.2f\n", balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdrawal(balance);
                break;
            default:
                printf("Invalid input, Try again!\n");
            }
            // ASK IF THE USER WANTS TO PERFORM MORE TRANSACTIONS/TASKS FROM THE MENU
            do
            {
                printf("Do you want to make more transactions? (y/n): ");

                scanf(" %c", &loop_continue);
                loop_continue = tolower(loop_continue);

                if (loop_continue != 'y' && loop_continue != 'n')
                {
                    printf("Invalid input. Please enter y or n.\n");
                }

            } while (loop_continue != 'y' && loop_continue != 'n');
        }
    } while (loop_continue == 'y');

    printf("\nThank you for banking with us. Have a great day!\n");
    return 0;
}