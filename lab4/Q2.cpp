#include <iostream>
#include <string>
using namespace std;

class Mobile
{
private:
    string brand;
    string model;
    float batteryPercentage;

public:
    Mobile(string b, string m, float battery)
    {
        brand = b;
        model = m;
        batteryPercentage = battery;
    }

    friend void checkBattery(Mobile m);
};

void checkBattery(Mobile m)
{
    cout << "\n--- Mobile Details ---" << endl;
    cout << "Brand: " << m.brand << endl;
    cout << "Model: " << m.model << endl;
    cout << "Battery Percentage: " << m.batteryPercentage << "%" << endl;

    if (m.batteryPercentage < 20)
        cout << "Battery Low" << endl;
    else
        cout << "Battery Normal" << endl;
}

int main()
{
    string brand, model;
    float battery;

    cout << "Enter Brand: ";
    getline(cin, brand);

    cout << "Enter Model: ";
    getline(cin, model);

    cout << "Enter Battery Percentage: ";
    cin >> battery;

    Mobile m(brand, model, battery);

    checkBattery(m);

    return 0;
}