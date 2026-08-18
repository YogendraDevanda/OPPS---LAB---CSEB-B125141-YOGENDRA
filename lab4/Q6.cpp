#include <iostream>
using namespace std;

class Door
{
private:
    int doorNumber;
    bool lockStatus;

public:
    Door(int number, bool status)
    {
        doorNumber = number;
        lockStatus = status;
    }

    friend class SecuritySystem;
};

class SecuritySystem
{
public:
    void checkLockStatus(Door d)
    {
        cout << "\n--- Door Details ---" << endl;
        cout << "Door Number: " << d.doorNumber << endl;

        if (d.lockStatus == true)
        {
            cout << "Lock Status: Locked" << endl;
        }
        else
        {
            cout << "Lock Status: Unlocked" << endl;
        }
    }
};

int main()
{
    int doorNumber;
    bool status;

    cout << "Enter Door Number: ";
    cin >> doorNumber;

    cout << "Enter Lock Status (1 for Locked, 0 for Unlocked): ";
    cin >> status;

    Door d(doorNumber, status);

    SecuritySystem s;

    s.checkLockStatus(d);

    return 0;
}