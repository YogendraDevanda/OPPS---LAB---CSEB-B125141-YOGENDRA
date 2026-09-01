#include <iostream>
using namespace std;

void update(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(p + i) = *(p + i) + 10;
    }
}

int main()
{
    int n;

    cout << "Enter number of players: ";
    cin >> n;

    int arr[n];

    cout << "Enter scores: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Scores before update: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    update(arr, n);

    cout << "Scores after update: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}