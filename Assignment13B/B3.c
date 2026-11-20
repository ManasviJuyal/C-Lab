#include <stdio.h>
int stringCompare(char *p1, char *p2)
{
    while(*p1 != '\0' && *p2 != '\0')
    {
        if(*p1 != *p2)
            return 0;
        p1++;
        p2++;
    }
    if(*p1 == '\0' && *p2 == '\0')
        return 1;
    else
        return 0;
}
int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    if(stringCompare(str1, str2))
        printf("Strings are equal");
    else
        printf("Strings are not equal");
    return 0;
}