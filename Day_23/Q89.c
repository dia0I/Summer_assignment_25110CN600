
// to find first non repeating character in string
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], c, ex_str[100];
    int n = 0;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);

    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }

    for (int i = 0; i < len; i++)
    {
        int count = 0, flag = 0;
        c = str[i];

        for (int j = 0; j < i; j++)
        {
            if (str[j] == c)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            continue;

        else
        {

            for (int k = 0; k < len; k++)
            {
                if (str[k] == c)
                    count++;
            }
            if (count > 1)
            {
                ex_str[n] = c;
                n++;
            }
        }
    }
    if (n > 0)
        printf("First non repeating character : %c", ex_str[0]);
    else
        printf("No non-repeating character found.");
}