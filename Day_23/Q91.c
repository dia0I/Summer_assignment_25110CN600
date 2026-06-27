#include <stdio.h>
#include <string.h>

int main()
{
    int flag = 0;
    char str1[100], str2[100];
    printf("Enter first word: ");
    fgets(str1, sizeof(str1), stdin);
    int len1 = 0;

    for (int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] != ' ' && str1[i] != '\n')
            len1++;
    }

    printf("Enter second word: ");
    fgets(str2, sizeof(str2), stdin);
    int len2 = 0;

    for (int i = 0; i < strlen(str2); i++)
    {
        if (str2[i] != ' ' && str2[i] != '\n')
            len2++;
    }

    if (len1 != len2)
    {
        printf("not anagram.");
    }
    else
    {
        for (int i = 0; i < len1; i++)
        {
            int freq1 = 0, freq2 = 0;
            int visited = 0;
            for (int j = 0; j < i; j++)
            {
                if (str1[i] == str1[j])
                {
                    visited = 1;
                    break;
                }
            }
            if (visited == 1)
                continue;

            else
            {
                for (int k = 0; str1[k] != '\0' || str2[k] != '\0'; k++)
                {
                    if (str1[k] != ' ' && str1[k] == str1[i])
                        freq1++;

                    if (str2[k] != ' ' && str2[k] == str1[i])
                        freq2++;
                }
                if (freq1 != freq2)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            printf("not anagram");
        }
        else
        {
            printf("Anagram");
        }
    }
}