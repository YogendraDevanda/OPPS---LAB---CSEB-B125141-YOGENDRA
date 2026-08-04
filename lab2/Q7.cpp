#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int productID;
    string productName;
    int quantity;
    float price;
    float inventoryValue;

public:
    void input()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price per Unit: ";
        cin >> price;
    }

    void display()
    {
        cout << "\n----- Product Details -----" << endl;
        cout << "Product ID   : " << productID << endl;
        cout << "Product Name : " << productName << endl;
        cout << "Quantity     : " << quantity << endl;
        cout << "Price/Unit   : " << price << endl;
    }

    void updateQuantity()
    {
        int sold;

        cout << "Enter Quantity Sold: ";
        cin >> sold;

        if (sold <= quantity)
        {
            quantity = quantity - sold;
            cout << "Quantity Updated Successfully.\n";
        }
        else
        {
            cout << "Not enough stock available!\n";
        }
    }

    void calculateValue()
    {
        inventoryValue = quantity * price;

        cout << "Inventory Value = " << inventoryValue << endl;
    }
};

int main()
{
    Product p;

    p.input();
    p.display();
    p.updateQuantity();
    p.calculateValue();

    return 0;
}