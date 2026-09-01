#include <iostream>
using namespace std;

int main()
{
    int parcels;
    int increase;

    cout << "Enter number of parcels: ";
    cin >> parcels;

    int *p = &parcels;

    cout << "Number of parcels = " << *p << endl;

    cout << "Enter increase value: ";
    cin >> increase;

    *p = *p + increase;

    cout << "Updated number of parcels = " << *p << endl;

    return 0;
}