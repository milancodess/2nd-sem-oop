#include <iostream>
using namespace std;

class Time
{
private:
    int hours, minutes;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
    }

    Time(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    friend Time operator+(Time t1, Time t2);
    friend bool operator==(Time t1, Time t2);

    void displayTime()
    {
        cout << hours << ":";

        if (minutes < 10)
        {
            cout << "0";
        }
        cout << minutes << endl;
    }
};

Time operator+(Time t1, Time t2)
{
    Time temp;

    temp.hours = t1.hours + t2.hours;
    temp.minutes = t1.minutes + t2.minutes;

    if (temp.minutes >= 60)
    {
        temp.hours += temp.minutes / 60;
        temp.minutes = temp.minutes % 60;
    }

    return temp;
}

bool operator==(Time t1, Time t2)
{
    return (t1.hours == t2.hours && t1.minutes == t2.minutes);
}

int main()
{
    int h1, m1, h2, m2;

    cout << "Enter first time (hours minutes): ";
    cin >> h1 >> m1;

    cout << "Enter second time (hours minutes): ";
    cin >> h2 >> m2;

    Time t1(h1, m1);
    Time t2(h2, m2);

    Time t3 = t1 + t2;

    cout << "\nFirst Time: ";
    t1.displayTime();

    cout << "Second Time: ";
    t2.displayTime();

    cout << "Sum of Time: ";
    t3.displayTime();

    if (t1 == t2)
    {
        cout << "Both times are equal." << endl;
    }
    else
    {
        cout << "Both times are not equal." << endl;
    }

    return 0;
}