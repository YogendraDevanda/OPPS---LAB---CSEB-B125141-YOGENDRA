#include<iostream>
using namespace std;
class Distance{
    private : 
    int inch;
    int feet;
    public : 
    Distance(int i=0 , int f = 0 ){
        inch = i;
        feet = f;
    }
    Distance operator+(const Distance& d){
          Distance temp ;
          temp.inch = inch + d.inch;
          temp.feet = feet + d.feet + (d.inch % 12);
          temp.inch = (d.inch % 12);
          return temp; 
    }
    void display() const {
        cout << feet << " feet " << inch<< " inches" << endl;
    }
};
int main() {
    Distance d1(5, 8);
    Distance d2(3, 7);

    Distance d3 = d1 + d2; 

    cout << "Distance 1: ";
    d1.display();

    cout << "Distance 2: ";
    d2.display();

    cout << "Result: ";
    d3.display();

    return 0;
}