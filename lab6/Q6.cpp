#include <iostream>
using namespace std;

float Highest(float *p, int n)
{
    float highest = *p;
    for (int i = 1; i < n; i++)
    {
        p++;
        if (*p > highest)
            highest = *p;
    }
    return highest;
}
int main()
{
    float prices[7];
    cout << "Enter prices of 7 products:\n";
    for (int i = 0; i < 7; i++)
    {
        cin >> prices[i];
    }
    float highest = Highest(prices, 7);

    cout << "Highest price = " << highest << endl;

    return 0;
}