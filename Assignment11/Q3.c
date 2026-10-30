#include <stdio.h>
void display()
{
    auto int x=55;
    static int y=75;
    x++;
    y++;
    printf("Auto variable x=%d\n",x);
    printf("Static variable y=%d\n",y);
}
int main()
{
    printf("First call to display():\n");
    display();
    printf("Second call to display():\n");
    display();
    printf("Third call to display():\n");
    display();
    return 0;
}