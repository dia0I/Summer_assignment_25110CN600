// WAP to compress a string
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    // input string
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    // remove newline character added by fgets()
    str[strcspn(str, "\n")] = '\0';

    printf("Compressed string is: ");

    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 1;

        // count consecutive occurrences of same character
        while (str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        // print character with its count
        printf("%c%d", str[i], count);
    }

    return 0;
}