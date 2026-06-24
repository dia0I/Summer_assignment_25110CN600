// Find length of string manually

#include <stdio.h>

int main()
{
    int len = 0;
    char str[100];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0')
    {
        len++;
    }

    if (len > 0 && str[len - 1] == '\n')
        len--;

    printf("Length of string: %d ", len);
    return 0;
}