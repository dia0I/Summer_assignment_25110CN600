// WAP to find the longest word in a string

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int start = 0, maxstart = 0;
    int count = 0, maxlen = 0;

    // input string
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    // remove newline character added by fgets()
    str[strcspn(str, "\n")] = '\0';

    // traverse the string
    for (int i = 0;; i++)
    {
        // count characters of current word
        if (str[i] != ' ' && str[i] != '\0')
        {
            count++;
        }

        // when space or end of string is encountered
        else
        {
            // check if current word is the longest
            if (count > maxlen)
            {
                maxlen = count;
                maxstart = start;
            }

            // reset count for next word
            count = 0;
            start = i + 1;
        }

        if (str[i] == '\0')
        {
            break;
        }
    }

    // print longest word
    printf("Longest word: ");

    for (int i = maxstart; i < maxstart + maxlen; i++)
    {
        printf("%c", str[i]);
    }

    printf("\nLength of longest word: %d", maxlen);

    return 0;
}