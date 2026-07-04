#include <iostream>
using namespace std;

class ComplexNumber
{
private:
    int real, imag;

public:
    ComplexNumber()
    {
        real = 0;
        imag = 0;
    }

    ComplexNumber(int r, int i)
    {
        real = r;
        imag = i;
    }

    ComplexNumber addComplex(ComplexNumber c2)
    {
        ComplexNumber temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }

    ComplexNumber subComplex(ComplexNumber c2)
    {
        ComplexNumber temp;
        temp.real = real - c2.real;
        temp.imag = imag - c2.imag;
        return temp;
    }

    void displayComplex()
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i";
        else
            cout << real << " - " << -imag << "i";
    }
};

int main()
{
    int r1, i1, r2, i2;

    cout << "Enter first complex number (real imag): ";
    cin >> r1 >> i1;

    cout << "Enter second complex number (real imag): ";
    cin >> r2 >> i2;

    ComplexNumber c1(r1, i1);
    ComplexNumber c2(r2, i2);

    ComplexNumber sum = c1.addComplex(c2);
    ComplexNumber diff = c1.subComplex(c2);

    cout << "\nFirst Complex Number: ";
    c1.displayComplex();

    cout << "\nSecond Complex Number: ";
    c2.displayComplex();

    cout << "\nSum: ";
    sum.displayComplex();

    cout << "\nDifference: ";
    diff.displayComplex();

    return 0;
}