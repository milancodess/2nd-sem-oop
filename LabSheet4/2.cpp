#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

    operator float()
    {
        return feet + (inches / 12.0);
    }

    void displayDistance()
    {
        cout << feet << "'-" << inches << "\"" << endl;
    }
};

int main()
{
    Distance distObj(5, 9);

    float d = distObj;

    distObj.displayDistance();
    cout << "Distance in feet = " << d << endl;

    return 0;
}