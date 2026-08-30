#include <iostream>
#include <fstream>
using namespace std;

class Student
{
    string name;
    int roll;
    float marks;

public:
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void putData()
    {
        cout << "Name: " << name
             << "\tRoll: " << roll
             << "\tMarks: " << marks << endl;
    }

    void writeData(ofstream &outFile)
    {
        outFile << name << " " << roll << " " << marks << endl;
    }

    void readData(ifstream &inFile)
    {
        inFile >> name >> roll >> marks;
    }
};

int main()
{
    Student s[5];

    ofstream outFile("students.txt");

    cout << "Enter details of 5 students:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        s[i].getData();
        s[i].writeData(outFile);
    }

    outFile.close();

    ifstream inFile("students.txt");

    cout << "\nContents of students.txt:\n\n";

    Student temp;

    while (!inFile.eof())
    {
        temp.readData(inFile);

        if (inFile)
            temp.putData();
    }

    inFile.close();

    return 0;
}