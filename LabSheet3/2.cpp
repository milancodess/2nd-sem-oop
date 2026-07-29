#include <iostream>
using namespace std;

class Complex
{
private:
    float real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(float r, float i)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c2)
    {
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }

    void displayComplex()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    float r1, i1, r2, i2;

    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex c3 = c1 + c2;

    cout << "\nFirst Complex Number: ";
    c1.displayComplex();

    cout << "Second Complex Number: ";
    c2.displayComplex();

    cout << "Sum of Complex Numbers: ";
    c3.displayComplex();

    return 0;
}