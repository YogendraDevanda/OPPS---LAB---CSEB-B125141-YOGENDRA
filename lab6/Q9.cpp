#include <iostream>

using namespace std;

class Temperature {
private:
    double celsius;

public:
    Temperature(double c = 0.0) {
        celsius = c;
    }
    bool operator<(const Temperature& other) const {
        return celsius < other.celsius;
    }

    bool operator>(const Temperature& other) const {
        return celsius > other.celsius;
    }

    void display() const {
        cout << celsius << "°C";
    }
};

int main() {
    Temperature temp1(25.5);
    Temperature temp2(30.0);

    cout << "Temperature 1: ";
    temp1.display();
    cout << "\nTemperature 2: ";
    temp2.display();
    cout << "\n\nComparison Result:\n";

    if (temp1 < temp2) {
        cout << "Temperature 1 is lower than Temperature 2." << endl;
    } else if (temp1 > temp2) {
        cout << "Temperature 1 is higher than Temperature 2." << endl;
    } else {
        cout << "Temperature 1 is equal to Temperature 2." << endl;
    }

    return 0;
}