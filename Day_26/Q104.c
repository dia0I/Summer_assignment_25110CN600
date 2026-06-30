#include <stdio.h>

int main()
{
    int score = 0;
    char choice;

    printf("----------------------------\n");
    printf("     WELCOME TO THE QUIZ    \n");
    printf("----------------------------\n");

    // Question 1
    printf("Q1.Which planet in our solar system is known as the Red Planet?\n");
    printf("Options-\n");
    printf("A.Venus\nB.Mars\nC.Jupiter\nD.Saturn\n");
    printf("choose an option: ");
    scanf(" %c", &choice);

    if (choice == 'B' || choice == 'b')
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong!Correct Ans- B.Mars\n");
    }

    // Question 2
    printf("Q2.Which ocean is the largest ocean on Earth?\n");
    printf("Options-\n");
    printf("A.Atlantic Ocean\nB.Indian Ocean\nC.Arctic Ocean\nD. Pacific Ocean\n");
    printf("choose an option : ");
    scanf(" %c", &choice);

    if (choice == 'D' || choice == 'd')
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong!Correct Ans- D.Pacific Ocean\n");
    }

    // Question 3
    printf("Q3.Who painted the famous 'Mona Lisa'?\n");
    printf("Options-\n");
    printf("A.Vincent van Gogh\nB.Leonardo da Vinci\nC.Pablo Picasso\nD. Claude Monet\n");
    printf("choose an option: ");
    scanf(" %c", &choice);

    if (choice == 'B' || choice == 'b')
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong!Correct Ans- B.Leonardo da Vinci\n");
    }

    // Question 4
    printf("Q4. How many colors are there in a rainbow?\n");
    printf("Options-\n");
    printf("A.5\nB.6\nC.7\nD.8\n");
    printf("choose an option: ");
    scanf(" %c", &choice);

    if (choice == 'C' || choice == 'c')
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong!Correct Ans- C.7\n");
    }

    // Question 5
    printf("Q5. What is the capital city of France?\n");
    printf("Options-\n");
    printf("A.Rome\nB.Berlin\nC.Paris\nD.Madrid\n");
    printf("choose an option: ");
    scanf(" %c", &choice);

    if (choice == 'C' || choice == 'c')
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong!Correct Ans- C.Paris\n");
    }

    printf("\nThe quiz has ended.\n");
    printf("Your score: %d/5", score);
}