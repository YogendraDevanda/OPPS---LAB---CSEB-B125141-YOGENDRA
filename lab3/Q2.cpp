#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
     int *arr =  new int[n];
    cout<<"enter elements of array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    delete[] arr;
    return 0;
}