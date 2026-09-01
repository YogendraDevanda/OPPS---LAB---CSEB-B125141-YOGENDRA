#include <iostream>
using namespace std;

void updateVisitors(int *count)
{
    int newVisitors;

    cout << "Enter newly arrived visitors: ";
    cin >> newVisitors;

    *count = *count + newVisitors;
}

int main()
{
    int visitors;

    cout << "Enter current visitor count: ";
    cin >> visitors;

    cout << "Before update: " << visitors << endl;

    updateVisitors(&visitors);

    cout << "After update: " << visitors << endl;

    return 0;
}