#include <stdio.h>

int main()
{
    int choice, n, temp, digit,reverse, sum, count, i, isPrime;
    int power, digits;
    do
    {
        printf("\nMENU\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count the Number of Digits\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &n);
                temp = n;
                reverse = 0;
                while(temp != 0)
                {
                    digit = temp % 10;
                    reverse = reverse * 10 + digit;
                    temp = temp / 10;
                }
                printf(n == reverse ? "Palindrome Number":"Not a Palindrome number"); 
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &n);
                temp = n;
                digits = 0;
                sum = 0;
                while(temp != 0)
                {
                    digits++;
                    temp = temp / 10;
                }
                temp = n;
                while(temp != 0)
                {
                    digit = temp % 10;
                    power = 1;
                    for(i = 1; i <= digits; i++)
                    {
                        power = power * digit;
                    }
                    sum = sum + power;
                    temp = temp / 10;
                }
                printf(sum==n ? "Armstrong number":"Not an Armstrong number");
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &n);
                if(n <= 1)
                {
                    isPrime = 0;
                }
                else
                {
                    isPrime = 1;
                    for(i = 2; i <= n / 2; i++)
                    {
                        if(n % i == 0)
                        {
                            isPrime = 0;
                            break;
                        }} }
                printf(isPrime==1 ? "Prime number":"Not a Prime number");
                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &n);
                temp = n;
                sum = 0;
                while(temp != 0)
                {
                    digit = temp % 10;
                    sum = sum + digit;
                    temp = temp / 10;
                }
                printf("Sum of digits = %d\n", sum);
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%d", &n);
                temp = n;
                count = 0;
                if(temp == 0)
                {
                    count = 1;
                }
                else
                {
                    if(temp < 0)
                        temp = -temp;

                    while(temp != 0)
                    {
                        count++;
                        temp = temp / 10;
                    }}
                printf("Number of digits = %d\n", count);
                break;
            case 6:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice! Please enter a choice between 1 and 6.\n");
        }
    } while(choice != 6);
    return 0;
}