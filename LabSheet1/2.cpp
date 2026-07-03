#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    int *marks = new int[n];

    cout << "Enter marks of " << n << " students:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
    }

    char choice;

    do
    {
        int highest = marks[0];
        int lowest = marks[0];
        int passed = 0;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (marks[i] > highest)
                highest = marks[i];

            if (marks[i] < lowest)
                lowest = marks[i];

            if (marks[i] >= 40)
                passed++;

            sum += marks[i];
        }

        double average = (double)sum / n;

        cout << "\n------ Result ------\n";
        cout << "Highest Marks : " << highest << endl;
        cout << "Lowest Marks  : " << lowest << endl;
        cout << "Average Marks : " << average << endl;
        cout << "Passed Students : " << passed << endl;

        cout << "\nDo you want to add more students? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y')
        {
            int extra;

            cout << "How many more students? ";
            cin >> extra;

            int *newMarks = new int[n + extra];

            for (int i = 0; i < n; i++)
            {
                newMarks[i] = marks[i];
            }

            cout << "Enter marks of new students:\n";
            for (int i = n; i < n + extra; i++)
            {
                cout << "Student " << i + 1 << ": ";
                cin >> newMarks[i];
            }

            delete[] marks;

            marks = newMarks;
            n += extra;
        }

    } while (choice == 'y' || choice == 'Y');

    delete[] marks;

    return 0;
}