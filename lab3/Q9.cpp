#include <iostream>
using namespace std;

class Product
{
private:
    int productID;
    string productName;
    float price;
    int quantity;

public:
    // Accept product details
    void accept()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    // Display product details
    void display()
    {
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Cost: " << price * quantity << endl;
    }

    // Calculate cost of one product
    float getCost()
    {
        return price * quantity;
    }
};

int main()
{
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    // Dynamically allocate array of Product objects
    Product *products = new Product[n];

    // Accept product details
    cout << "\nEnter Product Details:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nProduct " << i + 1 << endl;
        products[i].accept();
    }

    // Display all products
    cout << "\n===== Shopping Cart =====\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nProduct " << i + 1 << endl;
        products[i].display();
    }

    // Calculate total cost
    float total = 0;

    for (int i = 0; i < n; i++)
    {
        total = total + products[i].getCost();
    }

    // Display total amount
    cout << "\n=========================" << endl;
    cout << "Total Amount: " << total << endl;

    // Release dynamically allocated memory
    delete[] products;

    return 0;
}