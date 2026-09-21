#include <stdio.h>
int main()
{
     int num,n=0, temp;
     printf("Enter the number:");
     scanf("%d", &num);
     temp=num;
     while(temp!=0)
     {
        int r=temp%10;
        n=n*10+r;
        temp/=10;
     }
   
     printf(n==num? "Palindrome" : "Not Palindrome");
     return 0;
}