#include <stdio.h>
int gcd(int a, int b)
{
  while(b!=0)
  {
    int temp=b;
    b=a%b;
    a=temp;
  }
  return a;
}
int lcm(int a,int b)
{
  return(a*b)/gcd(a,b);
}
int main()
{
   int x,y,z, GCD, LCM;
   printf("Enter 3 positive numbers:");
   scanf("%d%d%d", &x,&y,&z);
    GCD=gcd(gcd(x,y),z);
    LCM=lcm(lcm(x,y),z);
    printf("GCD= %d\n", GCD);
    printf("LCM= %d\n", LCM);
    return 0;
}