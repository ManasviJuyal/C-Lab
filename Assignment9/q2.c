#include <stdio.h>
void checkevenodd(int a)
{
    if(a%2==0)
      printf("Even Number\n");
    else
      printf("Odd Number\n");  
}
void checkint(int n)
{
    if(n>0)
     printf("Positive\n");
    else if(n<0)
      printf("Negative\n"); 
    else 
      printf("Zero\n");
}
void isprime(int a)
{
    int f=1;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            f=0;
            break;
        }
    }
    printf(f==1? "Prime number\n":"Not a Prime number\n");
}
void isperfect(int a)
{
    int sum=0;
    if(a>0)
    {
        for(int i=1;i<a;i++)
        {
            if(a%i==0)
            sum+=i;
        }
    }
    if(a==sum && a>0)
        printf("Perfect Number\n");
    else
      printf("Not a perfect number\n");
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    checkevenodd(num);
    checkint(num);
    isprime(num);
    isperfect(num);
    return 0;
}