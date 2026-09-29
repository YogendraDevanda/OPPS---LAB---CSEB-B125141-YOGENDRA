#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    
    Date(int d = 1, int m = 1, int y = 2000) {
        day = d;
        month = m;
        year = y;
    }

    
    bool operator==(const Date& other) const {
        return (day == other.day && month == other.month && year == other.year);
    }

    
    void display() const {
        cout << day << " " << month << " " << year <<endl;
    }
};

int main() {
    Date date1(15, 8, 2026);
    Date date2(15, 8, 2026);
    Date date3(20, 8, 2026);

    cout << "Date 1: ";
    date1.display();
    cout << "Date 2: ";
    date2.display();

    
    if (date1 == date2) {
        cout << "Output: Both dates are equal." << endl;
    } else {
       cout << "Output: Dates are not equal." << endl;
    }

    return 0;
}