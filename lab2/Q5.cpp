#include<iostream>
#include<string>
using namespace std;

class Employee{
    int ID;
    string name;
    float salary;
    float HRA;
    float DA;
    float grosssalary;
    public : 
    void input(){
        cout<<"enter ID : ";
        cin>>ID;
        cin.ignore();
        cout<<"enter name : ";
        getline(cin, name);
        cout<<"enter salary : ";
        cin>>salary;

    }
    void calculation(){
        HRA = salary * 0.2;
        DA = salary * 0.1;
        grosssalary = salary + HRA + DA;
    }
    void display(){
        cout<<"salary : "<<salary<<endl;
        cout<<"hra : "<<HRA<<endl;
        cout<<"da : "<<DA<<endl;
        cout<<grosssalary;
    }
};
int main(){
    Employee e;
    e.input();
    e.calculation();
    e.display();

    return 0;
}