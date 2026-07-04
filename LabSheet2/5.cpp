#include <iostream>
using namespace std;

class Counter
{
private:
    static int count;

public:
    Counter()
    {
        count++;
        cout << "Object Created." << endl;
    }

    ~Counter()
    {
        count--;
        cout << "Object Destroyed." << endl;
    }

    static int getCount()
    {
        return count;
    }
};

int Counter::count = 0;

int main()
{
    cout << "Initial Count = " << Counter::getCount() << endl;

    Counter c1;
    cout << "Count = " << Counter::getCount() << endl;

    Counter c2;
    cout << "Count = " << Counter::getCount() << endl;

    {
        Counter c3;
        cout << "Count inside block = " << Counter::getCount() << endl;

        Counter c4;
        cout << "Count inside block = " << Counter::getCount() << endl;
    }

    cout << "Count after block = " << Counter::getCount() << endl;

    return 0;
}