#include <iostream>
#include <fstream>
using namespace std;

class Book
{
    string title;
    string author;
    float price;

public:
    friend ostream &operator<<(ostream &out, const Book &b)
    {
        out << b.title << " " << b.author << " " << b.price << endl;
        return out;
    }

    friend istream &operator>>(istream &in, Book &b)
    {
        in >> b.title >> b.author >> b.price;
        return in;
    }

    void display()
    {
        cout << "Title: " << title
             << "\tAuthor: " << author
             << "\tPrice: " << price << endl;
    }
};

int main()
{
    Book b;
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    ofstream outFile("books.txt");

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter title, author and price of Book " << i + 1 << ":\n";
        cin >> b;

        outFile << b;
    }

    outFile.close();

    ifstream inFile("books.txt");

    cout << "\nBooks stored in the file:\n";

    while (inFile >> b)
    {
        b.display();
    }

    inFile.close();

    return 0;
}