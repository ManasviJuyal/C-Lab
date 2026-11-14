
#include <stdio.h>
int main()
{
    int x = 10;

    int *p = &x;      
    int **pp = &p;     
    printf("Value of x = %d\n", x);
    printf("Value using *p = %d\n", *p);
    printf("Value using **pp = %d\n", **pp);
    printf("\nAddresses:\n");
    printf("Address of x (&x) = %p\n", (void*)&x);
    printf("Address stored in p = %p\n", (void*)p);
    printf("Address of p (&p) = %p\n", (void*)&p);
    printf("Address stored in pp = %p\n", (void*)pp);
    return 0;
}