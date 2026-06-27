// character with maximun frequency
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], c;
    int max_freq = 0, max_count = 0;
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
        int freq = 0, visited = 0;

        for (int j = 0; j < i; j++)
        {
            if (str[j] == str[i])
            {
                visited = 1;
                break;
            }
        }

        if (visited == 1)
            continue;

        else
        {

            for (int k = 0; k < len; k++)
            {
                if (str[k] == str[i])
                    freq++;
            }

            if (freq > max_freq)
            {
                max_freq = freq;
                c = str[i];
                max_count = 1;
            }
            else if (freq == max_freq)
            {
                max_count++;
                c = str[i];
            }
        }
    }
    if (len > 0 && max_count == 1)
        printf("Character with maximun frequency: %c ", c);
    else if (len > 0 && max_count > 1)
        printf("No unique element with maximun frequency");
    else
        printf("Character with maximun frequency: none ");
}