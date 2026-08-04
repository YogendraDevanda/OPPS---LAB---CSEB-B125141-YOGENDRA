#include <iostream>
#include <string>
using namespace std;
//define a class for student//
class Student
{
private:
   // to define variables//
    int rollNo;
    string name;
    float marks;

public:
//creat a function input student details//
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }
    // deefine a function dispaly() to get output//
    void display()
    {
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;
    }
};

int main()
{
    Student s;
   //calling to input function//
    s.input();
    //calling display function//
    s.display();

    return 0;
}