// Reverse a string

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter string: ");
    // scanf("%s", str);
    fgets(str, sizeof(str), stdin);

    printf("Reversed string :");
    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}