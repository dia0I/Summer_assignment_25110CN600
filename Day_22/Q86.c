// count words
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            count++;
    }

    printf("Number of words: %d", count);

    return 0;
}