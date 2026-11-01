#include <stdio.h>
extern int balance;
void deposite(int amount)
{
    balance+=amount;
}
void withdraw(int amount)
{
    balance-=amount;
}
int main()
{
    printf("Initial balance = %d\n", balance);
    deposite(2000);
    withdraw(500);
    printf("Final balance = %d\n", balance);    
    return 0;
}