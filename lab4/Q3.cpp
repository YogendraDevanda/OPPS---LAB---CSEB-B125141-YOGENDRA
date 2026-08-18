#include <iostream>
#include <string.h>
using namespace std;

class ParkingSlot
{
private:
    int slotNum;
    string vehicleNum;
    bool occupancyStatus;

public:
    ParkingSlot(int slot, string vehicle, bool status)
    {
        slotNum = slot;
        vehicleNum = vehicle;
        occupancyStatus = status;
    }

    friend void checkSlot(ParkingSlot p);
};

void checkSlot(ParkingSlot p)
{
    cout << "\n Parking Slot Details " << endl;
    cout << "Slot Number: " << p.slotNum << endl;

    if (p.occupancyStatus == true)
    {
        cout << "Status: Occupied" << endl;
        cout << "Vehicle Number: " << p.vehicleNum << endl;
    }
    else
    {
        cout << "Status: Available" << endl;
    }
}

int main()
{
    int slot;
    string vehicle;
    bool status;

    cout << "Enter Slot Number: ";
    cin >> slot;

    cout << "Enter Vehicle Number: ";
    cin >> vehicle;

    cout << "Is Slot Occupied? (1 for Yes, 0 for No): ";
    cin >> status;

    ParkingSlot p(slot, vehicle, status);

    checkSlot(p);

    return 0;
}
