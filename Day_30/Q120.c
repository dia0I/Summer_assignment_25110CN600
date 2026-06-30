// Mini shop billing system
#include <stdio.h>
#include <string.h>

#define MAX 50

int itemCode[MAX];
char itemName[MAX][30];
float itemPrice[MAX];
int itemStock[MAX];
int total = 0;

// ---- function prototypes ----
void addItem();
void displayItems();
int findItemIndex(int code); // helper function used by other functions
void sellItem();
void searchItem();
void lowStockReport();

int main()
{
    int choice;

    while (1)
    {
        printf("---- Mini Shop Billing System -----\n");
        printf("1. Add New Item\n");
        printf("2. Display All Items\n");
        printf("3. Sell Item (Billing)\n");
        printf("4. Search Item by Code\n");
        printf("5. Low Stock Report\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addItem();
            break;
        case 2:
            displayItems();
            break;
        case 3:
            sellItem();
            break;
        case 4:
            searchItem();
            break;
        case 5:
            lowStockReport();
            break;
        case 6:
            printf("Exiting program. Thank you!\n");
            return 0;
        default:
            printf("Invalid choice, try again.\n\n");
        }
    }

    return 0;
}

// ------- function definitions --------

void addItem()
{
    if (total >= MAX)
    {
        printf("Item list is full!\n");
        return;
    }

    printf("Enter item code: ");
    scanf("%d", &itemCode[total]);

    printf("Enter item name: ");
    scanf(" %[^\n]", itemName[total]);

    printf("Enter price: ");
    scanf("%f", &itemPrice[total]);

    printf("Enter stock quantity: ");
    scanf("%d", &itemStock[total]);

    total++;
    printf("Item added successfully!\n\n");
}

void displayItems()
{
    if (total == 0)
    {
        printf("No items in stock.\n\n");
        return;
    }

    printf("\n--- Item List ---\n");
    for (int i = 0; i < total; i++)
    {
        printf("Code: %d | Name: %s | Price: %.2f | Stock: %d\n",
               itemCode[i], itemName[i], itemPrice[i], itemStock[i]);
    }
    printf("\n");
}

// returns the array index for a given item code, or -1 if not found
int findItemIndex(int code)
{
    for (int i = 0; i < total; i++)
    {
        if (itemCode[i] == code)
            return i;
    }
    return -1;
}

void sellItem()
{
    int code, qty, index;

    printf("Enter item code to sell: ");
    scanf("%d", &code);

    index = findItemIndex(code);

    if (index == -1)
    {
        printf("Item not found.\n\n");
        return;
    }

    printf("Enter quantity to sell: ");
    scanf("%d", &qty);

    if (qty > itemStock[index])
    {
        printf("Not enough stock! Only %d available.\n\n", itemStock[index]);
        return;
    }

    float bill = qty * itemPrice[index];
    itemStock[index] -= qty;

    printf("Sold %d unit(s) of %s\n", qty, itemName[index]);
    printf("Total Bill: %.2f\n", bill);
    printf("Remaining Stock: %d\n\n", itemStock[index]);
}

void searchItem()
{
    int code, index;

    printf("Enter item code to search: ");
    scanf("%d", &code);

    index = findItemIndex(code);

    if (index == -1)
    {
        printf("Item with code %d not found.\n\n", code);
        return;
    }

    printf("Found! Name: %s, Price: %.2f, Stock: %d\n\n",
           itemName[index], itemPrice[index], itemStock[index]);
}

void lowStockReport()
{
    int threshold;
    int found = 0;

    printf("Enter stock threshold (show items below this): ");
    scanf("%d", &threshold);

    printf("\n--- Low Stock Items (below %d) ---\n", threshold);
    for (int i = 0; i < total; i++)
    {
        if (itemStock[i] < threshold)
        {
            printf("Code: %d | Name: %s | Stock: %d\n",
                   itemCode[i], itemName[i], itemStock[i]);
            found = 1;
        }
    }

    if (found == 0)
        printf("No items below the threshold.\n");

    printf("\n");
}