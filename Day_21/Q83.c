// count vowels and consonants
#include <stdio.h>
#include <string.h>

int main()
{
    int v_count = 0, c_count = 0;
    char str[100];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    strlwr(str);

    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            v_count++;
        else if (str[i] != ' ' && str[i] != '\n')
            c_count++;
    }
    printf("Vowel count = %d\nConsonant Count = %d", v_count, c_count);
}