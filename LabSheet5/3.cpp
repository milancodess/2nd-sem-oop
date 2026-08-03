#include <iostream>
#include <string>
using namespace std;

class Product
{
protected:
    int productID;
    string productName;
    float unitPrice;

public:
    Product(int id, string name, float price)
    {
        productID = id;
        productName = name;
        unitPrice = price;
    }
};

class Order : public Product
{
protected:
    int quantity;
    float totalAmount;

public:
    Order(int id, string name, float price, int qty)
        : Product(id, name, price)
    {
        quantity = qty;
        totalAmount = unitPrice * quantity;
    }
};

class Discount : public Order
{
private:
    float discount;
    float finalAmount;

public:
    Discount(int id, string name, float price, int qty)
        : Order(id, name, price, qty)
    {
        if (totalAmount >= 50000)
            discount = totalAmount * 0.15;
        else if (totalAmount >= 20000)
            discount = totalAmount * 0.10;
        else
            discount = 0;

        finalAmount = totalAmount - discount;
    }

    void display()
    {
        cout << "\n----- Product Details -----" << endl;
        cout << "Product ID   : " << productID << endl;
        cout << "Product Name : " << productName << endl;
        cout << "Unit Price   : Rs. " << unitPrice << endl;
        cout << "Quantity     : " << quantity << endl;

        cout << "\n----- Bill Details -----" << endl;
        cout << "Total Amount : Rs. " << totalAmount << endl;
        cout << "Discount     : Rs. " << discount << endl;
        cout << "Payable Amt  : Rs. " << finalAmount << endl;
    }
};

int main()
{
    int id, qty;
    string name;
    float price;

    cout << "Enter Product ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Product Name: ";
    getline(cin, name);

    cout << "Enter Unit Price: ";
    cin >> price;

    cout << "Enter Quantity: ";
    cin >> qty;

    Discount d(id, name, price, qty);

    d.display();

    return 0;
}