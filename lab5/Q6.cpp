#include <iostream>
using namespace std;

// Display an integer
void display(int value)
{
    cout << "Integer: " << value << endl;
}

// Display a floating-point number
void display(float value)
{
    cout << "Float: " << value << endl;
}

// Display a character
void display(char value)
{
    cout << "Character: " << value << endl;
}

// Display integer array
void display(int arr[], int n)
{
    cout << "Integer array: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

// Display character array
void display(char arr[], int n)
{
    cout << "Character array: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int num;
    float decimal;
    char ch;

    // Integer
    cout << "Enter an integer: ";
    cin >> num;
    display(num);

    // Floating-point
    cout << "\nEnter a floating-point number: ";
    cin >> decimal;
    display(decimal);

    // Character
    cout << "\nEnter a character: ";
    cin >> ch;
    display(ch);

    // Integer array
    int n;
    int arr[100];

    cout << "\nEnter size of integer array: ";
    cin >> n;

    cout << "Enter integer array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    display(arr, n);

    // Character array
    int m;
    char carr[100];

    cout << "\nEnter size of character array: ";
    cin >> m;

    cout << "Enter character array elements: ";
    for (int i = 0; i < m; i++)
        cin >> carr[i];

    display(carr, m);

    return 0;
}