#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file("numbers.dat",
                 ios::in | ios::out | ios::binary | ios::trunc);

    int num;

    cout << "Enter 5 integers:\n";

    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        file.write((char *)&num, sizeof(int));
    }

    int choice, pos;

    cout << "\n1. Read a value";
    cout << "\n2. Modify a value";
    cout << "\nEnter choice: ";
    cin >> choice;

    cout << "Enter record position (0 to 4): ";
    cin >> pos;

    if (pos < 0 || pos > 4)
    {
        file.seekg(pos * sizeof(int), ios::beg);

        if (file.fail())
        {
            cout << "Invalid position!" << endl;
            file.clear();
        }
        else
        {
            cout << "Invalid position!" << endl;
        }

        file.close();
        return 0;
    }

    if (choice == 1)
    {
        file.seekg(pos * sizeof(int), ios::beg);
        file.read((char *)&num, sizeof(int));

        if (file.fail())
        {
            cout << "Error reading the record." << endl;
            file.clear();
        }
        else
        {
            cout << "Value at position " << pos << " = " << num << endl;
        }
    }

    else if (choice == 2)
    {
        int newVal;

        cout << "Enter new value: ";
        cin >> newVal;

        file.seekp(pos * sizeof(int), ios::beg);
        file.write((char *)&newVal, sizeof(int));

        if (file.fail())
        {
            cout << "Error modifying the record." << endl;
            file.clear();
        }
        else
        {
            cout << "Value modified successfully." << endl;
        }
    }

    else
    {
        cout << "Invalid choice!" << endl;
    }

    file.close();

    return 0;
}