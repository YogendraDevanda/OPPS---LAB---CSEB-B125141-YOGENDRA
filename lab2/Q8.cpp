#include <iostream>
#include <string>
using namespace std;

class LibraryBook
{
private:
    int bookID;
    string bookTitle;
    string studentName;
    int daysIssued;
    int fine;

public:
    void input()
    {
        cout << "Enter Book ID: ";
        cin >> bookID;

        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, bookTitle);

        cout << "Enter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Number of Days Issued: ";
        cin >> daysIssued;
    }

    void calculateFine()
    {
        if (daysIssued > 15)
        {
            fine = (daysIssued - 15) * 2;
        }
        else
        {
            fine = 0;
        }
    }

    void display()
    {
        cout << "\n----- Library Transaction Details -----" << endl;
        cout << "Book ID        : " << bookID << endl;
        cout << "Book Title     : " << bookTitle << endl;
        cout << "Student Name   : " << studentName << endl;
        cout << "Days Issued    : " << daysIssued << endl;
        cout << "Fine Amount    : Rs. " << fine << endl;
    }
};

int main()
{
    LibraryBook b;

    b.input();
    b.calculateFine();
    b.display();

    return 0;
}