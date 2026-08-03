#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    int empID;
    string name;
    float basicSalary;

public:
    Employee(int id, string n, float basic)
    {
        empID = id;
        name = n;
        basicSalary = basic;
    }
};

class Salary : public Employee
{
private:
    float hra, da, bonus;
    float grossSalary, tax, netSalary;

public:
    Salary(int id, string n, float basic) : Employee(id, n, basic)
    {
        hra = basicSalary * 0.20;
        da = basicSalary * 0.10;
        bonus = basicSalary * 0.05;

        grossSalary = basicSalary + hra + da + bonus;
        tax = grossSalary * 0.03;
        netSalary = grossSalary - tax;
    }

    void display()
    {
        cout << "\n----- Employee Details -----" << endl;
        cout << "Employee ID : " << empID << endl;
        cout << "Name        : " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;

        cout << "\n----- Salary Details -----" << endl;
        cout << "HRA (20%)   : " << hra << endl;
        cout << "DA (10%)    : " << da << endl;
        cout << "Bonus (5%)  : " << bonus << endl;
        cout << "Gross Salary: " << grossSalary << endl;
        cout << "Tax (3%)    : " << tax << endl;
        cout << "Net Salary  : " << netSalary << endl;
    }
};

int main()
{
    int id;
    string name;
    float basic;

    cout << "Enter Employee ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> basic;

    Salary s(id, name, basic);

    s.display();

    return 0;
}