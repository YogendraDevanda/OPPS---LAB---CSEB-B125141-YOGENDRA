#include <iostream>
using namespace std;

class Distance
{
private:
    int feet1, inch1;
    int feet2, inch2;
    int totalFeet, totalInch;

public:
    void input()
    {
        cout << "Enter First Distance (Feet Inches): ";
        cin >> feet1 >> inch1;

        cout << "Enter Second Distance (Feet Inches): ";
        cin >> feet2 >> inch2;
    }

    void add()
    {
        totalFeet = feet1 + feet2;
        totalInch = inch1 + inch2;

        if (totalInch >= 12)
        {
            totalFeet = totalFeet + (totalInch / 12);
            totalInch = totalInch % 12;
        }
    }

    void display()
    {
        cout << "\nTotal Distance = "
             << totalFeet << " ft "
             << totalInch << " in" << endl;
    }
};

int main()
{
    Distance d;

    d.input();
    d.add();
    d.display();

    return 0;
}