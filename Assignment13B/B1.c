#include <stdio.h>
int stringLength(char *ptr)
{
    int count = 0;
    while(*ptr != '\0')
    {
        count++;
        ptr++;
    }
    return count;
}
int main()
{
    char str[100];
    int length;
    printf("Enter a string: ");
    scanf("%s", str);
    length = stringLength(str);
    printf("Length of string = %d", length);
   return 0;
}