#include <iostream>
using namespace std;

int main()
{
    int books[6] = {101, 102, 103, 104, 105, 106};

    int *p = books;

    cout << "Book IDs and their addresses:\n";

    for (int i = 0; i < 6; i++)
    {
        cout << "Book ID = " << *p;
        cout << "  Address = " << p << endl;
        p++;
    }
    return 0;
}