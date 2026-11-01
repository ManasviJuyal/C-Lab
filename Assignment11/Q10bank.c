#include <stdio.h>
static int balance=500;
void deposite(int amount)
{
    if(amount>0)
    balance+=amount;
}
void withdraw(int amount)
{
    if(amount>0 && amount<=balance)
    balance-=amount;
}
void displayBalance()
{
    printf("Balance = %d\n", balance);
}