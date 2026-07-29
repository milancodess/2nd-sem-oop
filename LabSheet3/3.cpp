#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }

    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

    friend Distance operator+(Distance d1, Distance d2);

    void displayDistance()
    {
        cout << feet << "'-" << inches << "\"" << endl;
    }
};

Distance operator+(Distance d1, Distance d2)
{
    Distance temp;

    temp.feet = d1.feet + d2.feet;
    temp.inches = d1.inches + d2.inches;

    if (temp.inches >= 12)
    {
        temp.feet += temp.inches / 12;
        temp.inches = temp.inches % 12;
    }

    return temp;
}

int main()
{
    int f1, i1, f2, i2;

    cout << "Enter first distance (feet inches): ";
    cin >> f1 >> i1;

    cout << "Enter second distance (feet inches): ";
    cin >> f2 >> i2;

    Distance d1(f1, i1);
    Distance d2(f2, i2);

    Distance d3 = d1 + d2;

    cout << "\nFirst Distance: ";
    d1.displayDistance();

    cout << "Second Distance: ";
    d2.displayDistance();

    cout << "Total Distance: ";
    d3.displayDistance();

    return 0;
}