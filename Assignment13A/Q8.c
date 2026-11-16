
#include <stdio.h>

void update_pointer(int **p, int *new_address)
{
    *p = new_address;
}

int main()
{
    int a = 10, b = 20;
    int *p = &a;
    printf("Before updating:\n");
    printf("Value of a = %d\n", a);
    printf("Value pointed by p = %d\n", *p);
    update_pointer(&p, &b);
    printf("\nAfter updating:\n");
    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n", b);
    printf("Value pointed by p = %d\n", *p);
    return 0;
}