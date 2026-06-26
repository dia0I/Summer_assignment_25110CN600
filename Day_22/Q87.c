// calculate frequency of a character
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100], n;
    int count = 0;
    printf("Enter : ");
    fgets(str, sizeof(str), stdin);
    strlwr(str);
    int len = strlen(str);

    if (len > 0 && str[len - 1] == '\n')
        len--;

    printf("Enter character: ");
    scanf("%c", &n);
    tolower(n);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == n)
            count++;
    }

    printf("Frequency of %c : %d", n, count);
}