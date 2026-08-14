#include<iostream>
#include<string.h>

using namespace std;
class Employee{
    int ID;
    string name;
    float salary;

  public : 
  
  void Input(){
    cout<<"enter employee id : ";
    cin>>ID;
    cin.ignore();
    cout<<"enter the empployee name : ";
    getline(cin,name);
    cout<<"enter salary : ";
    cin>>salary;
  }

  void Display(){
    cout<<"employee ID : "<<ID<<endl;
    cout<<"employee name : "<<name<<endl;
    cout<<"salary : "<<salary<<endl;
  }
};
int main(){
    // Dynamically create object
     Employee *y = new Employee;

    // Access functions using ->
    y->Input();
    y->Display();

    // Release memory
    delete y;
    
    return 0;
}