#include <iostream>
#include <string>
using namespace std;

class FoodOrder
{
private:
    int orderID;
    string foodItem;
    int quantity;
    float price;

public:
    FoodOrder(int id, string item, int qty, float p)
    {
        orderID = id;
        foodItem = item;
        quantity = qty;
        price = p;
    }

    friend void calculateBill(FoodOrder f);
};

void calculateBill(FoodOrder f)
{
    float totalBill = f.quantity * f.price;

    cout << "\n--- Food Order Details ---" << endl;
    cout << "Order ID: " << f.orderID << endl;
    cout << "Food Item: " << f.foodItem << endl;
    cout << "Quantity: " << f.quantity << endl;
    cout << "Price per Item: " << f.price << endl;
    cout << "Total Bill: " << totalBill << endl;
}

int main()
{
    int id, quantity;
    string item;
    float price;

    cout << "Enter Order ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Food Item: ";
    getline(cin, item);

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Price: ";
    cin >> price;

    FoodOrder f(id, item, quantity, price);

    calculateBill(f);

    return 0;
}