#include <iostream>
#include <string>
using namespace std;

class Item {
private:
   string name;
    double price;
    int quantity;

public:
    
    Item(string n = "", double p = 0.0, int q = 0){
        name = n;
        price = p;
        quantity = q;

    }

    Item operator+(const Item& other) const {
        if (name == other.name && price == other.price) {
            return Item(name, price, quantity + other.quantity);
        } else {
            cout << "Cannot combine: Items have different names or prices." << std::endl;
            return Item("", 0.0, 0);
        }
    }
    void display() const {
        if (!name.empty()) {
            cout << "Item: " << name << "  Price: $" << price<< " Quantity: " << quantity << endl;
        }
    }
};

int main() {
    Item item1("Laptop", 850.00, 5);
    Item item2("Laptop", 850.00, 3);
    Item item3("Mouse", 25.00, 10);

    cout << "Initial Items:" << endl;
    item1.display();
    item2.display();
    item3.display();

    cout << "\nCombining Item 1 and Item 2:" <<endl;
    Item combinedItem = item1 + item2;
    combinedItem.display();

    cout << "\nAttempting to combine Item 1 and Item 3:" << endl;
    Item invalidCombination = item1 + item3;

    return 0;
}