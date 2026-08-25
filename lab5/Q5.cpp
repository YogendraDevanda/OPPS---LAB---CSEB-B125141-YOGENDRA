#include <iostream>
using namespace std;

// Add value to an integer
int modify(int value, int add)
{
    return value + add;
}

// Add value to a floating-point number
float modify(float value, float add)
{
    return value + add;
}

// Modify integer using pointer
void modify(int *value, int add)
{
    *value = *value + add;
}

int main()
{
    int a, addInt;
    float b, addFloat;
    int c, addPointer;

    // Integer
    cout << "Enter an integer: ";
    cin >> a;

    cout << "Enter value to add: ";
    cin >> addInt;

    cout << "Before modification = " << a << endl;
    a = modify(a, addInt);
    cout << "After modification = " << a << endl;


    // Floating-point
    cout << "\nEnter a floating-point number: ";
    cin >> b;

    cout << "Enter value to add: ";
    cin >> addFloat;

    cout << "Before modification = " << b << endl;
    b = modify(b, addFloat);
    cout << "After modification = " << b << endl;


    // Using pointer
    cout << "\nEnter an integer for pointer modification: ";
    cin >> c;

    cout << "Enter value to add: ";
    cin >> addPointer;

    cout << "Before modification = " << c << endl;
    modify(&c, addPointer);
    cout << "After modification = " << c << endl;

    return 0;
}