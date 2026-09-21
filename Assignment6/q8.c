#include <stdio.h>
int main()
{
    int x,n, power, fact;
    float s=0;
    printf("Enter the valur of 'x' and 'n' : ");
    scanf("%d%d", &x,&n);
    for(int i=1;i<=n;i++)
    {
        power=1;
        fact=1;
        for(int j=1; j<=i; j++)
        {
            power*=x;
            fact*=j;
        }
        if(i%2==1)
        {
            s=s+(float)power/fact;
        }
        else
        {
            s=s-(float)power/fact;
        }
    }
    printf("Sum of series= %f\n", s);
    return 0;
}