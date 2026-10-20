#include <stdio.h>
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Fibonacci Series is not possible.\n");
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            result = fibonacci(i);
            printf("%d ", result);
        }
    }
    return 0;
}