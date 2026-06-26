// remove spaces from string
#include <stdio.h>
#include <string.h>

int main()
{
    int j = 0;
    char str[100], f_str[100];
    printf("Enter : ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);

    if (len > 0 && str[len - 1] == '\n')
        len--;

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
            continue;
        else
        {
            f_str[j] = str[i];
            j++;
        }
    }
    f_str[j] = '\0';

    printf("String without spaces : %s", f_str);

    return 0;
}