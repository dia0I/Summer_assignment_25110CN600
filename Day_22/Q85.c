#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev_str[100];
    int flag = 0, j = 0;

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }

    for (int i = len - 1; i >= 0; i--)
    {
        rev_str[j] = str[i];
        j++;
    }

    rev_str[j] = '\0';

    for (int i = 0; i < len; i++)
    {
        if (str[i] != rev_str[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("The entered string is palindrome.");
    else
        printf("The entered string is not palindrome.");

    return 0;
}