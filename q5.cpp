// Write a C++ program to define a base class Item (item-no, name, price).
//  Derive a class Discounted-Item (discount-percent). A customer purchases
//  'n' items. Display the item-wise bill and total amount using appropriate item

#include <iostream>
using namespace std;

class itemDetails
{
public:
    int item_no;
    char item_name[30];
    float price;
};
class Discounteditem : public itemDetails
{
    public:
    int discount_percent;
    int discounted_price;

    void accept_details()
    {
        cout << "Enter item No\n";
        cin >> item_no;
        cout << "Enter item Name\n";
        cin >> item_name;
        cout << "Enter item price\n";
        cin >> price;
        cout << "Enter discounted percentage\n";
        cin >> discount_percent;
        cout << "----------";
        discounted_price = price - price * discount_percent / 100;
    }
    void display_details()
    {
        cout << "Item name :" << item_name<<endl;
        cout << "item Number :" << item_no<<endl;
        cout << "item price :" << price<<endl;
        cout << "Discount percent :" << discount_percent<<endl;
        cout << "Discounted price :" << discounted_price<<endl;
    }
};
int main()
{
    int i, count, discount = 0, price = 0;
    Discounteditem dt[100];
    cout << "How many items you want to enter ?\n";
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        dt[i].accept_details();
    }
    for (int i = 1; i <= count; i++)
    {
        dt[i].display_details();
    }
    for (int i = 1; i <= count; i++)
    {
        price = price + dt[i].price;
    }
    for (i = 1; i <= count; i++)
    {
        discount = discount + dt[i].price - dt[i].discounted_price;
    }
    cout << "Total price : \n"
         << price;
    cout << "Total discount : \n"
         << discount;
    cout << "total Payable amount : \n"
         << price - discount;
    return 0;
}