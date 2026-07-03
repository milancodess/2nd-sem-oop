#include <iostream>
using namespace std;
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "\nInside swapByValue: a = " << a << ", b = " << b << endl;
}
void swapByPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "\nInside swapByPointer: a = " << *a << ", b = " << *b << endl;
}
void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "\nInside swapByReference: a = " << a << ", b = " << b << endl;
}

int main()
{
    int x = 10, y = 20;

    cout << "Original values: x = " << x << ", y = " << y << endl;

    swapByValue(x, y);
    cout << "After swapByValue: x = " << x << ", y = " << y << endl;

    swapByPointer(&x, &y);
    cout << "After swapByPointer: x = " << x << ", y = " << y << endl;

    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << ", y = " << y << endl;

    return 0;
}