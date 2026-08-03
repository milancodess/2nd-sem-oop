#include <iostream>
using namespace std;

class Account
{
private:
    float balance;
    static int totalAccounts;

public:
    Account(float bal)
    {
        balance = bal;
        totalAccounts++;
    }

    static int getCount()
    {
        return totalAccounts;
    }

    friend void addInterest(Account &a1, Account &a2, float rate);

    void displayBalance()
    {
        cout << "Balance: " << balance << endl;
    }
};

int Account::totalAccounts = 0;

void addInterest(Account &a1, Account &a2, float rate)
{
    a1.balance += a1.balance * rate / 100;
    a2.balance += a2.balance * rate / 100;
}

int main()
{
    Account a1(10000);
    Account a2(20000);

    cout << "Before adding interest:" << endl;
    a1.displayBalance();
    a2.displayBalance();

    addInterest(a1, a2, 5);

    cout << "\nAfter adding 5% interest:" << endl;
    a1.displayBalance();
    a2.displayBalance();

    cout << "\nTotal Accounts: " << Account::getCount() << endl;

    return 0;
}