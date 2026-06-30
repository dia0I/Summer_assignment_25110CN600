// Write a program to Create mini library system.
#include <stdio.h>
#include <string.h>

#define MAX 50

int bookId[MAX];
char bookTitle[MAX][50];
char bookAuthor[MAX][30];
int isIssued[MAX]; // 0 = available, 1 = issued
int total = 0;

void addBook()
{
    if (total >= MAX)
    {
        printf("Library is full!\n");
        return;
    }

    printf("Enter book ID: ");
    scanf("%d", &bookId[total]);

    printf("Enter book title: ");
    scanf(" %[^\n]", bookTitle[total]);

    printf("Enter author name: ");
    scanf(" %[^\n]", bookAuthor[total]);

    isIssued[total] = 0; // new book is available by default
    total++;

    printf("Book added successfully!\n\n");
}

void displayBooks()
{
    if (total == 0)
    {
        printf("No books in library.\n\n");
        return;
    }

    printf("\n--- Library Books ---\n");
    for (int i = 0; i < total; i++)
    {
        printf("ID: %d | Title: %s | Author: %s | Status: %s\n",
               bookId[i], bookTitle[i], bookAuthor[i],
               isIssued[i] == 1 ? "Issued" : "Available");
    }
    printf("\n");
}

void issueBook()
{
    int id, found = 0;
    printf("Enter book ID to issue: ");
    scanf("%d", &id);

    for (int i = 0; i < total; i++)
    {
        if (bookId[i] == id)
        {
            found = 1;
            if (isIssued[i] == 1)
                printf("Sorry, this book is already issued.\n\n");
            else
            {
                isIssued[i] = 1;
                printf("Book issued successfully!\n\n");
            }
            break;
        }
    }

    if (found == 0)
        printf("Book with ID %d not found.\n\n", id);
}

void returnBook()
{
    int id, found = 0;
    printf("Enter book ID to return: ");
    scanf("%d", &id);

    for (int i = 0; i < total; i++)
    {
        if (bookId[i] == id)
        {
            found = 1;
            if (isIssued[i] == 0)
                printf("This book was not issued.\n\n");
            else
            {
                isIssued[i] = 0;
                printf("Book returned successfully!\n\n");
            }
            break;
        }
    }

    if (found == 0)
        printf("Book with ID %d not found.\n\n", id);
}

void searchBook()
{
    char title[50];
    int found = 0;

    printf("Enter book title to search: ");
    scanf(" %[^\n]", title);

    for (int i = 0; i < total; i++)
    {
        if (strcmp(bookTitle[i], title) == 0)
        {
            printf("Found! ID: %d, Author: %s, Status: %s\n\n",
                   bookId[i], bookAuthor[i],
                   isIssued[i] == 1 ? "Issued" : "Available");
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Book \"%s\" not found.\n\n", title);
}

int main()
{
    int choice;

    while (1)
    {
        printf("====== Mini Library System ======\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Search Book by Title\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            displayBooks();
            break;
        case 3:
            issueBook();
            break;
        case 4:
            returnBook();
            break;
        case 5:
            searchBook();
            break;
        case 6:
            printf("Exiting program. Bye!\n");
            return 0;
        default:
            printf("Invalid choice, try again.\n\n");
        }
    }

    return 0;
}