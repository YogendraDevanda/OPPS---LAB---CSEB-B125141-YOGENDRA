#include<iostream>
using namespace std;
int main(){
    int seat[8] = {23 , 24 , 34 , 56 , 12 , 10 , 43 , 78};
    int *p = seat;
    cout<<"seat numbers before updating :";
    for(int i=0;i<8;i++){
         cout<< *(p +i)<<" ";
    }
    cout<<endl;
    int j,s;
    cout<<"enter a new seat number at position : ";
    cin>>j;
    if (j < 0 || j >= 8)
    {
        cout << "Position not found";
        return 0;
    }
    cout<<endl;
    cout<<"enter value to uadate at poation j : ";
    cin>>s;
    
    *(p+j) = s;
    cout<<"uapdated seat number : ";
    for(int i=0;i<8;i++){
        cout<<*(p+i)<<" ";
    }
    return 0;
}