#include <iostream>
using namespace std;

class Room
{
private:
    double length, breadth, height;

public:
    Room()
    {
        length = 10;
        breadth = 10;
        height = 10;
    }

    Room(double l, double b, double h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    Room(const Room &r)
    {
        length = r.length;
        breadth = r.breadth;
        height = r.height;
    }

    double calculateArea()
    {
        return length * breadth;
    }

    double calculateVolume()
    {
        return length * breadth * height;
    }

    void display()
    {
        cout << "\nLength : " << length << " ft" << endl;
        cout << "Breadth : " << breadth << " ft" << endl;
        cout << "Height : " << height << " ft" << endl;
        cout << "Floor Area : " << calculateArea() << " sq.ft" << endl;
        cout << "Volume : " << calculateVolume() << " cu.ft" << endl;
    }
};

int main()
{
    double l, b, h;

    Room r1;

    cout << "Enter Length, Breadth and Height: ";
    cin >> l >> b >> h;
    Room r2(l, b, h);

    Room r3(r2);

    cout << "\nDefault Constructor Object";
    r1.display();

    cout << "\nParameterized Constructor Object";
    r2.display();

    cout << "\nCopy Constructor Object";
    r3.display();

    return 0;
}