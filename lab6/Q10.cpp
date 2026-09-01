#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int *ids = new int[n];

    cout << "Enter student IDs: ";

    for (int i = 0; i < n; i++)
    {
        cin >> *(ids + i);
    }

    int searchID;

    cout << "Enter ID to search: ";
    cin >> searchID;

    int *p = ids;
    int position = -1;

    for (int i = 0; i < n; i++)
    {
        if (*p == searchID)
        {
            position = i;
            break;
        }

        p++;
    }

    if (position != -1)
    {
        cout << "Student ID found." << endl;
        cout << "Position = " << position << endl;
    }
    else
    {
        cout << "Student ID not found." << endl;
    }
    delete[] ids;

    return 0;
}