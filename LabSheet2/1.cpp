#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    int marks[5];
    int total;
    double percentage;
    char grade;

public:
    Student(int r, string n)
    {
        roll = r;
        name = n;
        total = 0;
        percentage = 0;
        grade = 'F';
    }

    void getMarks()
    {
        cout << "Enter marks of 5 subjects:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calculateResult()
    {
        total = 0;

        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }

        percentage = total / 5.0;

        if (percentage >= 90)
        {
            grade = 'A';
        }
        else if (percentage >= 75)
        {
            grade = 'B';
        }
        else if (percentage >= 60)
        {
            grade = 'C';
        }
        else if (percentage >= 40)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }
    }

    void displayResult()
    {
        cout << "\n----- Student Result -----\n";
        cout << "Roll Number : " << roll << endl;
        cout << "Name        : " << name << endl;

        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }

        cout << "\nTotal       : " << total << endl;
        cout << "Percentage  : " << percentage << "%" << endl;
        cout << "Grade       : " << grade << endl;
    }
};

int main()
{
    int roll;
    string name;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    Student s(roll, name);

    s.getMarks();
    s.calculateResult();
    s.displayResult();

    return 0;
}