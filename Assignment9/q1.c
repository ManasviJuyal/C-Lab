#include <stdio.h>
int add(int a,int b)
{
    return (a+b);
}
int sub(int a, int b)
{
    return (a-b);
}
int multiplication(int a, int b)
{
    return a*b;
}
float div(int a, int b)
{
    return (float)a/(float)b;
}
int mod(int a,int b)
{
    return a%b;
}
int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x,&y);
    printf("Addition= %d\n", add(x,y));
    printf("Subtraction= %d\n", sub(x,y));
    printf("Multiplication= %d\n", multiplication(x,y));
    if(y==0)
    {
        printf("Division not possible!\nModulus not possible! \n");
    }
    else 
    {
        printf("Division= %f\n", div(x,y));
        printf("Modulus= %d\n", mod(x,y));
    }
    return 0;
}