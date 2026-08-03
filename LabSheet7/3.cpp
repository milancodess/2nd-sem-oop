#include <iostream>
using namespace std;

template <class T>
class Item
{
protected:
    int itemCode;
    T price;

public:
    Item(int code, T p)
    {
        itemCode = code;
        price = p;
    }
};

class DiscountedItem : public Item<double>
{
private:
    double discount;
    double finalPrice;

public:
    DiscountedItem(int code, double p, double dis)
        : Item<double>(code, p)
    {
        discount = dis;
        finalPrice = price - (price * discount / 100);
    }

    void display()
    {
        cout << "Item Code   : " << itemCode << endl;
        cout << "Price       : Rs. " << price << endl;
        cout << "Discount    : " << discount << "%" << endl;
        cout << "Final Price : Rs. " << finalPrice << endl;
    }
};

int main()
{
    DiscountedItem item(101, 2500.0, 10);

    item.display();

    return 0;
}