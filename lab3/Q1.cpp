#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    //allocate memory for intiger
    int *a = new int(n);

    cout<<*a;
    //delete free memory
    delete a;
    return 0;
}