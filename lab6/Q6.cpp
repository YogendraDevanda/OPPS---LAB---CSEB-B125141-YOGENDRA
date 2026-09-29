#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) {
        value = v;
    }
    Counter& operator++() {
        ++value;         
        return *this;    
    }
    Counter operator++(int) {
        Counter temp = *this; 
        value++;             
        return temp;         
    }
    void display() const {
        cout << value << endl;
    }
};

int main() {
    Counter c(10);

    cout << "Initial value: ";
    c.display();

    cout << "Before ++c: ";
    c.display();
    
    ++c; 
    
    cout << "After ++c:  ";
    c.display();

    cout << "Before c++: ";
    c.display();
    
    c++; 
    
    cout << "After c++:  ";
    c.display();

    return 0;
}