#include <iostream>
using namespace std;
//define a class
class Student
{
private:
    int rollNumber;
    string name;
    float marks;

public:
    void accept()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin,name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Details\n";
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    // Dynamically create object
    Student *s = new Student;

    // Access functions using ->
    s->accept();
    s->display();

    // Release memory
    delete s;

    return 0;
}