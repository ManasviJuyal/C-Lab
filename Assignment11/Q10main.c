void deposite(int amount);
void withdraw(int amount);
void displayBalance();
int main()
{
    displayBalance();
    deposite(500);
    displayBalance();
    withdraw(200);
    displayBalance();
    deposite(1500);
    displayBalance();
    return 0;
} 