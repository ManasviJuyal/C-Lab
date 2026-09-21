#include <stdio.h>
int main() 
{
    int lower, upper, i, j, count = 0;
    int isPrime;
    printf("Enter the lower limit and the upper limit: ");
    scanf("%d%d", &lower, &upper);
    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for (i = lower; i <= upper; i++) {
        if (i < 2)
            continue;
        isPrime = 1;
        for (j = 2; j <= i / 2; j++)
         {
            if (i % j == 0) 
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime==1)
         {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTotal number of prime numbers = %d\n", count);
    return 0;
}