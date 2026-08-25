#include <iostream>
using namespace std;

// Count digits in an integer
int count(int num)
{
    int digits = 0;

    if (num == 0)
        return 1;

    if (num < 0)
        num = -num;

    while (num != 0)
    {
        digits++;
        num = num / 10;
    }

    return digits;
}

// Count elements in an integer array
int count(int arr[], int n)
{
    return n;
}

// Count occurrences of a character
int count(char arr[], int n, char ch)
{
    int occurrences = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ch)
            occurrences++;
    }

    return occurrences;
}

int main()
{
    int num;

    // Count digits
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Number of digits = " << count(num) << endl;


    // Count array elements
    int n;
    int arr[100];

    cout << "\nEnter size of integer array: ";
    cin >> n;

    cout << "Enter integer array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Number of elements = " << count(arr, n) << endl;


    // Count character occurrences
    int m;
    char carr[100];
    char ch;

    cout << "\nEnter size of character array: ";
    cin >> m;

    cout << "Enter characters: ";
    for (int i = 0; i < m; i++)
        cin >> carr[i];

    cout << "Enter character to count: ";
    cin >> ch;

    cout << "Number of occurrences = "
         << count(carr, m, ch) << endl;

    return 0;
}