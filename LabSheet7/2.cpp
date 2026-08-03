#include <iostream>
using namespace std;

template <class T>
class Pair
{
private:
    T num1, num2;

public:
    Pair(T a, T b)
    {
        num1 = a;
        num2 = b;
    }

    void displaySum()
    {
        cout << "Sum = " << num1 + num2 << endl;
    }

    void displayDifference()
    {
        cout << "Difference = " << num1 - num2 << endl;
    }
};

int main()
{
    Pair<int> p1(20, 10);
    cout << "Integer Pair:" << endl;
    p1.displaySum();
    p1.displayDifference();

    cout << endl;

    Pair<float> p2(12.5, 5.3);
    cout << "Float Pair:" << endl;
    p2.displaySum();
    p2.displayDifference();

    return 0;
}