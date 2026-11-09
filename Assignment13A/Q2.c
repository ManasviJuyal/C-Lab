#include <stdio.h>
int main()
{
    int num;
    int *ptr;
    printf("Enter an integer value: ");
    scanf("%d", &num);
    ptr = &num;
    printf("Original value: %d\n", num);
    *ptr = *ptr + 10;
    printf("Modified value: %d\n", num);
    return 0;
}