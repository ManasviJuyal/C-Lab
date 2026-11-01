#include <stdio.h>

static int num = 10;  

void display(void)
{
    printf("Static global number = %d\n", num);
}
int main()
{
    display();
    num=100;
    display();
    return 0;
}