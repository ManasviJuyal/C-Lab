#include <stdio.h>
void analyzeString(char *str, int *vowels, int *consonants,
                   int *digits, int *spaces, int *special)
{
    int i = 0;
    char ch;
    *vowels = 0;
    *consonants = 0;
    *digits = 0;
    *spaces = 0;
    *special = 0;
    while (*(str + i) != '\0')
    {
        ch = *(str + i);
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }
        if (ch == 'a' || ch == 'e' || ch == 'i' ||ch == 'o' || ch == 'u')
        {
            (*vowels)++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            (*consonants)++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            (*digits)++;
        }
        else if (ch == ' ')
        {
            (*spaces)++;
        }
        else
        {
            (*special)++;
        }
        i++;
    }
}
int main()
{
    char str[200];
    int consonants, digits, spaces, special, vowels;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    analyzeString(str, &vowels, &consonants,  &digits, &spaces, &special);
    printf("String Analysis\n");
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);
    printf("Special Characters = %d\n", special);
    return 0;
}