#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    Product(string n = "", double p = 0.0, int q = 0){
        name = n;
        price = p;
        quantity = q;
    }
        
    double getTotalValue() const {
        return price * quantity;
    }
    Product operator+(const Product& other) const {
        if (name == other.name && price == other.price) {
            return Product(name, price, quantity + other.quantity);
        } 
        else {
            cout << "Cannot combine: Products must have the same name and price.\n";
            return Product("", 0.0, 0);
        }
    }

    bool operator>(const Product& other) const {
        return this->getTotalValue() > other.getTotalValue();
    }

    void display() const {
        if (!name.empty()) {
            cout << "Product: " << name 
                 << " | Price: $" << price 
                 << " | Qty: " << quantity 
                 << " | Total Value: $" << getTotalValue() << endl;
        }
    }
};

int main() {
    Product p1("Wireless Mouse", 20.00, 3); 
    Product p2("Wireless Mouse", 20.00, 5); 
    Product p3("Mechanical Keyboard", 80.00, 1);

    cout << " Initial Products\n";
    p1.display();
    p2.display();
    p3.display();

    Product combinedProduct = p1 + p2;
    combinedProduct.display();


    if (combinedProduct > p3) {
        cout << "Combined Mouse stock " << combinedProduct.getTotalValue() << " has a HIGHER total value than Keyboard stock "
             << p3.getTotalValue()  << endl;
    } else {
        cout << "Keyboard stock has a HIGHER or EQUAL total value than combined Mouse stock." << endl;
    }

    return 0;
}