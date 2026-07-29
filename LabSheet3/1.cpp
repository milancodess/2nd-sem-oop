#include <iostream>
using namespace std;
class Counter
{
private:
    int count;

public:
    Counter(int c = 0)
    {
        count = c;
    }

    Counter operator++()
    {
        ++count;
        return *this;
    }

    Counter operator++(int)
    {
        Counter temp = *this;
        count++;
        return temp;
    }

    void displayCount()
    {
        cout << "Count = " << count << endl;
    }
};

int main()
{
    Counter c1(5);

    cout << "Initial Value: ";
    c1.displayCount();

    ++c1;
    cout << "After Prefix ++: ";
    c1.displayCount();

    c1++;
    cout << "After Postfix ++: ";
    c1.displayCount();

    return 0;
}