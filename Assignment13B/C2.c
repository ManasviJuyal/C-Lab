#include <stdio.h>
int square(int n)
{
    return n * n;
}
int cube(int n)
{
    return n * n * n;
}
int factorial(int n)
{
    int i, fact = 1;
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    int (*ptr[3])(int) = {square, cube, factorial};
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Square = %d\n", ptr[0](n));
    printf("Cube = %d\n", ptr[1](n));
    if(n < 0)
        printf("Factorial is not defined for negative numbers");
    else
        printf("Factorial = %d\n", ptr[2](n));
    return 0;
}