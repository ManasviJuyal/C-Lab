#include <stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int sum=0;
    register int i;
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum = %d\n", sum);
    return 0;
}