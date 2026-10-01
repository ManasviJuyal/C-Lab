#include <stdio.h>
int sumofdigit(int n)
{
    int sum=0;
    while(n>0)
    {
       int r=n%10;
       sum+=r;
       n/=10;
    }
    return sum;
}
int count(int n)
{
    int c=0;
    while(n>0)
    {
        c++;
        n/=10;
    }
    return c;
}
int rev(int n)
{
  int revs=0;
  while(n>0)
    {
       int r=n%10;
       revs=revs*10+r;
       n/=10;
    }
    return revs;
}
void ispalindrome(int n)
{
   printf(n==rev(n)? "Palindrome number":"Not a Palindrome");
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits= %d\n",sumofdigit(num));
    printf("Number of digits= %d\n",count(num) );
    printf("Reverse of number= %d\n", rev(num));
    ispalindrome(num);
    return 0;
}