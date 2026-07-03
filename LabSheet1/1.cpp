#include <iostream>
#include <iomanip>
using namespace std;

namespace Permanent
{
    double calculateSalary(double basic)
    {
        double hra = basic * 0.20;
        double tax = basic * 0.10;
        return basic + hra - tax;
    }
}

namespace Contract
{
    double calculateSalary(double basic)
    {
        double allowance = basic * 0.10;
        return basic + allowance;
    }
}

int main()
{
    int type;
    double basic, salary;

    cout << "Employee Type\n";
    cout << "1. Permanent\n";
    cout << "2. Contract\n";
    cout << "Enter your choice: ";
    cin >> type;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    if (type == 1)
    {
        salary = Permanent::calculateSalary(basic);
    }
    else if (type == 2)
    {
        salary = Contract::calculateSalary(basic);
    }
    else
    {
        cout << "Invalid employee type!" << endl;
        return 0;
    }

    cout << "\n";
    cout << setfill('=') << setw(40) << "" << endl;
    cout << setfill(' ');
    cout << setw(25) << left << "Salary Slip" << endl;
    cout << setfill('=') << setw(40) << "" << endl;
    cout << setfill(' ');

    cout << left << setw(20) << "Employee Type"
         << ": " << (type == 1 ? "Permanent" : "Contract") << endl;

    cout << left << setw(20) << "Basic Salary"
         << ": " << fixed << setprecision(2) << basic << endl;

    cout << left << setw(20) << "Net Salary"
         << ": " << fixed << setprecision(2) << salary << endl;

    cout << setfill('=') << setw(40) << "" << endl;

    return 0;
}