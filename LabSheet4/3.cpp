#include <iostream>
using namespace std;

class Kilometers
{
private:
    float km;

public:
    Kilometers(float k)
    {
        km = k;
    }

    float getKm()
    {
        return km;
    }

    void displayKilometers()
    {
        cout << "Kilometers: " << km << endl;
    }
};

class Miles
{
private:
    float miles;

public:
    Miles(Kilometers k)
    {
        miles = k.getKm() * 0.621371;
    }

    void displayMiles()
    {
        cout << "Miles: " << miles << endl;
    }
};

int main()
{
    Kilometers k(10);

    Miles m = k;

    k.displayKilometers();
    m.displayMiles();

    return 0;
}