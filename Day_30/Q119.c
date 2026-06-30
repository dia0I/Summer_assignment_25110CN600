// Write a program to Create mini employee management system.
#include <stdio.h>
#include <string.h>

#define MAX 50

int empId[MAX];
char empName[MAX][30];
char empDept[MAX][20];
float empSalary[MAX];
int total = 0;

void addEmployee()
{
    if (total >= MAX)
    {
        printf("Employee list is full!\n");
        return;
    }

    printf("Enter employee ID: ");
    scanf("%d", &empId[total]);

    printf("Enter employee name: ");
    scanf(" %[^\n]", empName[total]);

    printf("Enter department: ");
    scanf(" %[^\n]", empDept[total]);

    printf("Enter salary: ");
    scanf("%f", &empSalary[total]);

    total++;
    printf("Employee added successfully!\n\n");
}

void displayEmployees()
{
    if (total == 0)
    {
        printf("No employee records to show.\n\n");
        return;
    }

    printf("\n--- All Employee Records ---\n");
    for (int i = 0; i < total; i++)
    {
        printf("ID: %d | Name: %s | Dept: %s | Salary: %.2f\n",
               empId[i], empName[i], empDept[i], empSalary[i]);
    }
    printf("\n");
}

void searchEmployee()
{
    int id, found = 0;
    printf("Enter employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < total; i++)
    {
        if (empId[i] == id)
        {
            printf("Found! Name: %s, Dept: %s, Salary: %.2f\n\n",
                   empName[i], empDept[i], empSalary[i]);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Employee with ID %d not found.\n\n", id);
}

void updateSalary()
{
    int id, found = 0;
    float newSalary;

    printf("Enter employee ID to update salary: ");
    scanf("%d", &id);

    for (int i = 0; i < total; i++)
    {
        if (empId[i] == id)
        {
            printf("Enter new salary: ");
            scanf("%f", &newSalary);
            empSalary[i] = newSalary;
            printf("Salary updated successfully!\n\n");
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Employee with ID %d not found.\n\n", id);
}

void deleteEmployee()
{
    int id, pos = -1;
    printf("Enter employee ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < total; i++)
    {
        if (empId[i] == id)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        printf("Employee not found.\n\n");
        return;
    }

    // shift everything after pos one step back
    for (int i = pos; i < total - 1; i++)
    {
        empId[i] = empId[i + 1];
        strcpy(empName[i], empName[i + 1]);
        strcpy(empDept[i], empDept[i + 1]);
        empSalary[i] = empSalary[i + 1];
    }

    total--;
    printf("Employee deleted successfully!\n\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("====== Employee Management System ======\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addEmployee();
            break;
        case 2:
            displayEmployees();
            break;
        case 3:
            searchEmployee();
            break;
        case 4:
            updateSalary();
            break;
        case 5:
            deleteEmployee();
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