#include <stdio.h>
int stringLength(char *p)
{
    int count = 0;

    while(*p != '\0')
    {
        count++;
        p++;
    }
    return count;
}
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
int stringCompare(char *p1, char *p2)
{
    while(*p1 && *p2)
    {
        if(*p1 != *p2)
            return 0;
        p1++;
        p2++;
    }

    return (*p1 == '\0' && *p2 == '\0');
}
int main()
{
    char str1[100], str2[100], str3[100];
    int (*lengthPtr)(char *);
    void (*copyPtr)(char *, char *);
    int (*comparePtr)(char *, char *);
    lengthPtr = stringLength;
    copyPtr = stringCopy;
    comparePtr = stringCompare;
    printf("Enter first string: ");
    scanf("%99s", str1);
    printf("Enter second string: ");
    scanf("%99s", str2);
    printf("\nLength of first string = %d\n",
           lengthPtr(str1));
    copyPtr(str1, str3);
    printf("Copied string = %s\n", str3);
    if(comparePtr(str1, str2))
        printf("Strings are equal");
    else
        printf("Strings are not equal");
    return 0;
}