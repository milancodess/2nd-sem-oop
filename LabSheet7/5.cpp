#include <iostream>
using namespace std;

class Calculator
{
public:
    void divide(int a, int b)
    {
        if (a < 0 || b < 0)
            throw "Negative numbers are not allowed!";

        if (b == 0)
            throw b;

        cout << "Result = " << a / b << endl;
    }
};

int main()
{
    Calculator c;
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    try
    {
        c.divide(a, b);
    }
    catch (int)
    {
        cout << "Error: Division by zero is not allowed." << endl;
    }
    catch (const char *msg)
    {
        cout << "Error: " << msg << endl;
    }

    return 0;
}