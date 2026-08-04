#include<iostream>
using namespace std;
 class rectangle{
    int length;
    int breadth;
    int area ;
    int perameter;
    public : 
    void input(){
        cout<<"enter the value of length : ";
        cin>>length;
        cout<<"enter the breadtth : ";
        cin>>breadth;
    }
    void calculation(){
        area = length * breadth;
        perameter = 2*(length + breadth);
    }
    void Rarea(){
        cout<<"area of rectangle is : "<<area<<endl;
        cout<<"perameter of rectangle is : "<<perameter<<endl;
    }

 };
 int main(){
    rectangle r;

    r.input();
    r.calculation();
    r.Rarea();

    return 0;
 }