#include<iostream>
using namespace std;
class calculator{
    int n1,n2;
    int addition;
    int Subtraction ;
    int Multiplication ;
    float  Division;
    public : 
    void input(){
        cout<<"enter the value of n1 : ";
        cin>>n1;
        cout<<"enter the value of n2 : ";
        cin>>n2;
    }
    void calculation(){
        addition = n1 + n2;
        Subtraction  = n1 -n2;
        Multiplication  = n1 * n2;
       Division  = n1 / n2;
    }
    void output(){
        cout<<"ADDITION : "<<addition<<endl;
        cout<<"SUBTRACTION :  : "<<Subtraction <<endl;
        cout<<"MULTIPLICATION : "<<Multiplication <<endl;
        cout<<"DIVISION : "<<Division<<endl;
    }
};
int main(){
    calculator c;

    c.input();
    c.calculation();
    c.output();

    return 0;

}