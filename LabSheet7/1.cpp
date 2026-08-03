#include <iostream>
using namespace std;

template <class T>
T Largest(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int int1 = 10, int2 = 25;
    float float1 = 5.7f, float2 = 3.2f;
    char char1 = 'A', char2 = 'Z';

    cout << "Larger integer: "
         << Largest(int1, int2) << endl;

    cout << "Larger float: "
         << Largest(float1, float2) << endl;

    cout << "Larger character: "
         << Largest(char1, char2) << endl;

    return 0;
}