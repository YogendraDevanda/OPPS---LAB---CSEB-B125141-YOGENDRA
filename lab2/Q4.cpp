#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string holderName;
    float balance;

public:
    void input()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, holderName);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;

        cout << "Enter Deposit Amount: ";
        cin >> amount;

        balance = balance + amount;

        cout << "Amount Deposited Successfully.\n";
    }

    void withdraw()
    {
        float amount;
        cout << "Enter Withdrawal Amount: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawal Successful.\n";
        }
        else
            cout << "Insufficient Balance! Withdrawal Failed.\n";
    }

    void display()
    {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Holder Name    : " << holderName << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.input();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}