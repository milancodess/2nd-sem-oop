#include <iostream>
using namespace std;

class Rupees
{
private:
    float amount;

public:
    Rupees(float amt)
    {
        amount = amt;
    }

    void displayRupees()
    {
        cout << "Rs. " << amount << endl;
    }
};

class Dollars
{
private:
    float amount;

public:
    Dollars(float amt)
    {
        amount = amt;
    }

    operator Rupees()
    {
        return Rupees(amount * 135);
    }

    void displayDollars()
    {
        cout << "$ " << amount << endl;
    }
};

int main()
{
    Dollars d(100);

    Rupees r = d;

    d.displayDollars();
    r.displayRupees();

    return 0;
}