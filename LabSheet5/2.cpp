#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int studentID;
    string name;
    int semester;

public:
    Student(int id, string n, int sem)
    {
        studentID = id;
        name = n;
        semester = sem;
    }
};

class Marks : public Student
{
protected:
    int m1, m2, m3, m4, m5;

public:
    Marks(int id, string n, int sem,
          int a, int b, int c, int d, int e)
        : Student(id, n, sem)
    {
        m1 = a;
        m2 = b;
        m3 = c;
        m4 = d;
        m5 = e;
    }
};

class Result : public Marks
{
private:
    int total;
    float percentage;
    string division;

public:
    Result(int id, string n, int sem,
           int a, int b, int c, int d, int e)
        : Marks(id, n, sem, a, b, c, d, e)
    {
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5.0;

        if (m1 < 32 || m2 < 32 || m3 < 32 || m4 < 32 || m5 < 32 || percentage < 32)
            division = "Fail";
        else if (percentage >= 80)
            division = "Distinction";
        else if (percentage >= 60)
            division = "First";
        else if (percentage >= 45)
            division = "Second";
        else
            division = "Pass";
    }

    void display()
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Student ID : " << studentID << endl;
        cout << "Name       : " << name << endl;
        cout << "Semester   : " << semester << endl;

        cout << "\n----- Marks -----" << endl;
        cout << "Subject 1 : " << m1 << endl;
        cout << "Subject 2 : " << m2 << endl;
        cout << "Subject 3 : " << m3 << endl;
        cout << "Subject 4 : " << m4 << endl;
        cout << "Subject 5 : " << m5 << endl;

        cout << "\nTotal      : " << total << endl;
        cout << "Percentage : " << percentage << "%" << endl;
        cout << "Division   : " << division << endl;
    }
};

int main()
{
    int id, sem;
    string name;
    int m1, m2, m3, m4, m5;

    cout << "Enter Student ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Semester: ";
    cin >> sem;

    cout << "Enter marks in 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    Result r(id, name, sem, m1, m2, m3, m4, m5);

    r.display();

    return 0;
}