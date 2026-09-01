#include <iostream>
using namespace std;

int main()
{
    char message[100] = "YOGENDRA devan DA";
    char *p = message;

    int uppercase = 0;
    int lowercase = 0;
    int spaces = 0;

    while (*p != '\0')
    {
        if (*p >= 'A' && *p <= 'Z')
        {
            uppercase++;
        }
        else if (*p >= 'a' && *p <= 'z')
        {
            lowercase++;
        }
        else if (*p == ' ')
        {
            spaces++;
        }

        p++;
    }

    cout << "Number of uppercase : " << uppercase << endl;
    cout << "Number of lowercase : " << lowercase << endl;
    cout << "Number of spaces : " << spaces << endl;

    return 0;
}