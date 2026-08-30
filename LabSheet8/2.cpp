#include <iostream>
#include <fstream>
using namespace std;

class Employee
{
    int empId;
    char name[30];
    float salary;

public:
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayEmployee()
    {
        cout << "Employee ID: " << empId
             << "\tName: " << name
             << "\tSalary: " << salary << endl;
    }
};

int main()
{
    Employee emp;
    int n;

    cout << "How many employees do you want to add? ";
    cin >> n;

    ofstream outFile("employee.dat", ios::binary | ios::app);

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << ":\n";
        emp.getEmployee();

        outFile.write((char *)&emp, sizeof(emp));
    }

    outFile.close();

    ifstream inFile("employee.dat", ios::binary);

    cout << "\nAll Employee Records:\n";

    while (inFile.read((char *)&emp, sizeof(emp)))
    {
        emp.displayEmployee();
    }

    inFile.close();

    return 0;
}