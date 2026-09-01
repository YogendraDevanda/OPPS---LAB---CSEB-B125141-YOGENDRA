#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of parking slots: ";
    cin >> n;
    int *arr = new int[n];

    cout << "Enter slot status (0 = Available, 1 = Occupied): ";

    for (int i = 0; i < n; i++)
    {
        cin >> *(arr + i);
    }

    int available = 0;
    int occupied = 0;

    int *p = arr;
    for (int i = 0; i < n; i++)
    {
        if (*p == 0)
        {
            available++;
        }
        else if (*p == 1)
        {
            occupied++;
        }

        p++;
    }

    cout << "Available slots = " << available << endl;
    cout << "Occupied slots = " << occupied << endl;

    delete[] arr;

    return 0;
}