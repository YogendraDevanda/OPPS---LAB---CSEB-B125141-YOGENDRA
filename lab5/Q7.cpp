#include <iostream>
using namespace std;

// Compare two integers
int compare(int a, int b)
{
    return (a > b) ? a : b;
}

// Compare two floating-point numbers
float compare(float a, float b)
{
    return (a > b) ? a : b;
}

// Compare two integer arrays
bool compare(int arr1[], int arr2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
            return false;
    }

    return true;
}

int main()
{
    int a, b;
    float x, y;

    // Two integers
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Larger integer = " << compare(a, b) << endl;


    // Two floating-point numbers
    cout << "\nEnter two floating-point numbers: ";
    cin >> x >> y;

    cout << "Larger floating-point value = "
         << compare(x, y) << endl;


    // Two integer arrays
    int n;
    int arr1[100], arr2[100];

    cout << "\nEnter size of arrays: ";
    cin >> n;

    cout << "Enter first array: ";
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    cout << "Enter second array: ";
    for (int i = 0; i < n; i++)
        cin >> arr2[i];

    if (compare(arr1, arr2, n))
        cout << "Both arrays contain identical elements." << endl;
    else
        cout << "Arrays do not contain identical elements." << endl;

    return 0;
}