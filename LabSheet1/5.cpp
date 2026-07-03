#include <iostream>
using namespace std;
void findDetails(int arr[], int n, int &sum, int &max, int &min)
{
    sum = 0;
    max = arr[0];
    min = arr[0];
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
}

bool isSorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum, max, min;

    findDetails(arr, n, sum, max, min);
    cout << "\nSum = " << sum;
    cout << "\nMaximum = " << max;
    cout << "\nMinimum = " << min << endl;

    if (isSorted(arr, n))
    {
        cout << "The array is sorted." << endl;
    }
    else
    {
        cout << "The array is not sorted." << endl;
    }
    return 0;
}