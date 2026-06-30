// Write a program to Create student record system using arrays and strings
#include <stdio.h>
#include <string.h>

#define MAX 50

int rollno[MAX];
char names[MAX][30];
float marks[MAX];
int total = 0; // how many students added abhi tak

void addStudent()
{
    if (total >= MAX)
    {
        printf("Record list is full!\n");
        return;
    }

    printf("Enter roll number: ");
    scanf("%d", &rollno[total]);

    printf("Enter name: ");
    scanf(" %[^\n]", names[total]); // reads full name with spaces

    printf("Enter marks: ");
    scanf("%f", &marks[total]);

    total++;
    printf("Student added successfully!\n\n");
}

void displayAll()
{
    if (total == 0)
    {
        printf("No records to show.\n\n");
        return;
    }

    printf("\n--- All Student Records ---\n");
    for (int i = 0; i < total; i++)
    {
        printf("Roll No: %d | Name: %s | Marks: %.2f\n", rollno[i], names[i], marks[i]);
    }
    printf("\n");
}

void searchStudent()
{
    int r, found = 0;
    printf("Enter roll number to search: ");
    scanf("%d", &r);

    for (int i = 0; i < total; i++)
    {
        if (rollno[i] == r)
        {
            printf("Found! Name: %s, Marks: %.2f\n\n", names[i], marks[i]);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Student with roll no %d not found.\n\n", r);
}

void deleteStudent()
{
    int r, pos = -1;
    printf("Enter roll number to delete: ");
    scanf("%d", &r);

    for (int i = 0; i < total; i++)
    {
        if (rollno[i] == r)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        printf("Student not found.\n\n");
        return;
    }

    // shift everything after pos one step back
    for (int i = pos; i < total - 1; i++)
    {
        rollno[i] = rollno[i + 1];
        strcpy(names[i], names[i + 1]);
        marks[i] = marks[i + 1];
    }

    total--;
    printf("Student deleted successfully!\n\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("---- Student Record System ----\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayAll();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            deleteStudent();
            break;
        case 5:
            printf("Exiting program. Bye!\n");
            return 0;
        default:
            printf("Invalid choice, try again.\n\n");
        }
    }

    return 0;
}