#include <stdio.h>
int main()
{
    int num = 10;
    int *ptr;
    ptr = &num;
    printf("Value of variable: %d\n", num);
    printf("Address of variable: %p\n", (void*)&num);
    printf("Pointer value: %p\n", (void*)ptr);
    printf("Dereferenced value: %d\n", *ptr);
    return 0;
}