#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p;
    p = arr;
    printf("Initial pointer address: %p\n", (void*)p);
    p++;
    printf("After p++: %p\n", (void*)p);
    p--;
    printf("After p--: %p\n", (void*)p);
    printf("After p + 2: %p\n", (void*)(p + 2));
    printf("After p - 1: %p\n", (void*)(p - 1));
    return 0;
}