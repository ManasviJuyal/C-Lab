#include <stdio.h>
int main()
{
    int a;
    float b,c;
    printf("Enter an integer: ");
    scanf("%d",&a);
    printf("Enter an floating point numbers: ");
    scanf("%f",&b);
    c=a+b;
    printf("\nImplicite Type Concersion\n");
    printf("Addition=%.2f\n", c);
    c=a-b;
    printf("\nSubtraction=%.2f\n", c);
    c=a*b;
    printf("\nMultiplication=%.2f\n", c);
    c=a/b;
    printf("\nDivision=%.2f\n", c);
    return 0;
}