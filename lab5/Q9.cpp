#include <iostream>
using namespace std;

// Maximum between two integers
int maximum(int a, int b)
{
    return (a > b) ? a : b;
}

// Maximum between two values using integer pointers
int maximum(int *a, int *b)
{
    return (*a > *b) ? *a : *b;
}

// Maximum value in an integer array using pointer
int maximum(int *arr, int n)
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main()
{
    int a, b;

    // Maximum between two integers
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Maximum = " << maximum(a, b) << endl;


    // Maximum using pointers
    int x, y;

    cout << "\nEnter two integers for pointer comparison: ";
    cin >> x >> y;

    cout << "Maximum = "
         << maximum(&x, &y) << endl;


    // Maximum in array using pointer
    int n;
    int arr[100];

    cout << "\nEnter size of integer array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Maximum value in array = "
         << maximum(arr, n) << endl;

    return 0;
}