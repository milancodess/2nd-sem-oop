#include <iostream>
using namespace std;

inline double area(double side)
{
    return side * side;
}

double area(double length, double width)
{
    return length * width;
}

double area(int base, int height, double factor = 0.5)
{
    return factor * base * height;
}

int main()
{
    double side, length, width;
    int base, height;

    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of Square = " << area(side) << endl;

    cout << "\nEnter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle = " << area(length, width) << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = " << area(base, height) << endl;

    return 0;
}