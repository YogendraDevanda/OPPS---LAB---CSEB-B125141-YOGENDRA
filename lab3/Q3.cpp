#include<iostream>
using namespace std;

class number{
    int n;
    int *arr = new int[n];
;
    public : 
    void input(){
        cout<<"enter n : ";
        cin>>n;
        cout<<"enter array elements :"<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }
    void output(){
          int max = arr[0];
          for(int i=0;i<n;i++){
            if(max<arr[i])
               max =arr[i];
            
 
          }
          cout<<"max number is : "<<max;  
    }
    ~number(){
        delete[] arr;
    }
};
int main(){
    number n;
    n.input();
    n.output();
    

    return 0;
}