#include <stdio.h>
int a=20;
int main()
{
    printf("Global variable a=%d\n",a);
    {
        int a=30;
        printf("Local variable a=%d\n",a);
    }
    printf("Global variable a=%d\n",a);
    return 0;
}