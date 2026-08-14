#include<iostream>
#include<string.h>
using namespace std;

class Student{
    int rollno;
    string name;
    int noofsubject;
    int *marks;
    int total = 0;
    float avg;
    public : 
    void Input(){
        cout<<"enter studebt rollno: ";
        cin>>rollno;
        cin.ignore();
        cout<<"enter student name : ";
        getline(cin,name);
        cout<<"enter no of subject : ";
        cin>>noofsubject;
    }
    void alloctedmarks(){
        marks = new int(noofsubject);
    }
    void acceptmarks(){
        cout<<"marks of all subject is : "<<endl;
        for(int i=0;i<noofsubject;i++){
            cin>>marks[i];
        }
    }
    void calculation(){
        for(int i=0;i<noofsubject;i++){
             total = total + marks[i];
             avg = total / noofsubject;
        }
    }
    ~Student(){
    delete[] marks;
    }
};
int main(){
    Student s;
    s.Input();
    s.alloctedmarks();
    s.acceptmarks();
    s.calculation();

    
    return 0;
}