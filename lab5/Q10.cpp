#include <iostream>
using namespace std;

// Add two integers
int add(int a, int b)
{
    return a + b;
}

// Add an integer and a floating-point value
float add(int a, float b)
{
    return a + b;
}

// Add two floating-point values
float add(float a, float b)
{
    return a + b;
}

// Add all elements of an integer array
int add(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

// Add two values using integer pointers
int add(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int a, b;
    float x, y;

    // 1. Two integers
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Sum of two integers = "
         << add(a, b) << endl;


    // 2. Integer and floating-point value
    cout << "\nEnter an integer and a floating-point value: ";
    cin >> a >> x;

    cout << "Sum = "
         << add(a, x) << endl;


    // 3. Two floating-point values
    cout << "\nEnter two floating-point values: ";
    cin >> x >> y;

    cout << "Sum of two floating-point values = "
         << add(x, y) << endl;


    // 4. Integer array and its size
    int n;
    int arr[100];

    cout << "\nEnter size of integer array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum of array elements = "
         << add(arr, n) << endl;


    // 5. Two integer pointers
    int p, q;

    cout << "\nEnter two integers for pointer addition: ";
    cin >> p >> q;

    cout << "Sum using pointers = "
         << add(&p, &q) << endl;

    return 0;
}