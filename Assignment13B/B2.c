#include <stdio.h>
void stringCopy(char *p1, char *p2)
{
    while(*p1 != '\0')
    {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';
}
int main()
{
    char str1[100], str2[100];
    printf("Enter a string: ");
    scanf("%s", str1);
    stringCopy(str1, str2);
    printf("Original string = %s\n", str1);
    printf("Copied string = %s\n", str2);
    return 0;
}