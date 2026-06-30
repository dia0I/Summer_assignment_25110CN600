// WAP to check whether one string is rotation of another

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    // input first string
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    // input second string
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // remove newline character
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // check lengths
    if (strlen(str1) == strlen(str2))
    {
        // concatenate first string with itself
        strcpy(temp, str1);
        strcat(temp, str1);

        // check if second string is a substring
        if (strstr(temp, str2))
        {
            printf("Strings are rotations of each other.");
        }
        else
        {
            printf("Strings are not rotations of each other.");
        }
    }
    else
    {
        printf("Strings are not rotations of each other.");
    }

    return 0;
}