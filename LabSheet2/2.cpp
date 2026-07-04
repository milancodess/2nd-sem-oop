#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empId;
    string name;
    double basicSalary, hra, da, grossSalary, tax, netSalary;

public:
    Employee(int id, string n, double basic)
    {
        empId = id;
        name = n;
        basicSalary = basic;
    }

    void calculateGrossSalary()
    {
        hra = 0.20 * basicSalary;
        da = 0.10 * basicSalary;
        grossSalary = basicSalary + hra + da;
    }

    void calculateNetSalary()
    {
        if (grossSalary > 50000)
            tax = 0.10 * grossSalary;
        else
            tax = 0;

        netSalary = grossSalary - tax;
    }

    void displaySalarySlip()
    {
        cout << "\n=========f Salary Slip ==========\n";
        cout << "Employee ID   : " << empId << endl;
        cout << "Name          : " << name << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "HRA (20%)     : " << hra << endl;
        cout << "DA (10%)      : " << da << endl;
        cout << "Gross Salary  : " << grossSalary << endl;
        cout << "Tax           : " << tax << endl;
        cout << "Net Salary    : " << netSalary << endl;
    }
};

int main()
{
    int id;
    string name;
    double basicSalary;

    cout << "Enter Employee ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    Employee e(id, name, basicSalary);

    e.calculateGrossSalary();
    e.calculateNetSalary();
    e.displaySalarySlip();

    return 0;
}