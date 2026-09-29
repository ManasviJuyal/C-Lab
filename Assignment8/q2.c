#include <stdio.h>
int main() 
{
    char original[100],copied[100];
    int i = 0;
    printf("Enter a string: ");
    fgets(original, sizeof(original), stdin);
    while (original[i] != '\0')
     {
        copied[i]=original[i];
        i++;
    }
    copied[i] = '\0';
    printf("\nOriginal string: %s", original);
    printf("Copied string: %s\n", copied);
    return 0;
}