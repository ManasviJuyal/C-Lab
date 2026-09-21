#include <stdio.h>
int main()
{
    int num, r, b=0, pos=1;
    printf("Enter a positive decimal number: ");
    scanf("%d", &num);
    while(num>0)
    {
        r=num%2;
        b=b+r*pos;
        pos=pos*10;
        num/=2;
    }
     printf("The binary number is: %d", b);
     return 0;
}