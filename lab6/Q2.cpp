#include<iostream>
using namespace std;
class Complex{
    private :
    float real;
    float imag;
    public :
    Complex(float r =0,float i =0){
        real  = r;
        imag = i;

    }
    Complex operator-(const Complex& c){
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
    void display() const {
        if (imag >= 0) {
            cout << real << " + " << imag << "i" << endl;
        } else {
            cout << real << " - " << -imag << "i" << endl;
        }
    }
};
int main(){
    Complex c1(8,5);
    Complex c2(3,2);
    Complex c3 = c1 - c2;
    cout << "c1 = : ";
    c1.display();

    cout << "c2 = : ";
    c2.display();

    cout << "C1 - C2 = ";
    c3.display();

    return 0;

}