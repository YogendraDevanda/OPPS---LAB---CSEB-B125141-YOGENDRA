#include <iostream>
using namespace std;

int main()
{
    float balance;
    float addAmount;
    float deductAmount;

    cout << "Enter current balance: ";
    cin >> balance;

    float *p = &balance;

    cout << "Current balance = " << *p << endl;

    cout << "Enter amount to add: ";
    cin >> addAmount;

    *p = *p + addAmount;

    cout << "Balance after adding = " << *p << endl;

    cout << "Enter amount to deduct: ";
    cin >> deductAmount;

    *p = *p - deductAmount;

    cout << "Final balance = " << *p << endl;

    return 0;
}