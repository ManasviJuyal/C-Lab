#include <stdio.h>
int a=10;
int main()
{
    int b=20;
    static int c=30;
     printf("Inside main before block:\n");
     printf("Global variable a= %d\n", a);
     printf("Local variable b= %d\n", b);
     printf("static variable a= %d\n", c);
     {
        int b=50;
        a=a+5;
        b=b+5;
        c=c+5;
         printf("\nInside block:\n");
         printf("Global variable a= %d\n", a);
         printf("Local variable b= %d\n", b);
         printf("static variable a= %d\n", c);
     }
      printf("\nInside main after block:\n");
     printf("Global variable a= %d\n", a);
     printf("Local variable b= %d\n", b);
     printf("static variable a= %d\n", c);
     return 0;
}   