#include <iostream>
using namespace std;

int main()
{
    int marks;

    try
    {
        cout << "Enter student's marks: ";
        cin >> marks;

        if (marks < 0 || marks > 100)
        {
            throw marks;
        }

        cout << "Marks entered: " << marks << endl;
    }
    catch (int m)
    {
        cout << "Error: Invalid marks! Marks must be between 0 and 100." << endl;
    }

    return 0;
}