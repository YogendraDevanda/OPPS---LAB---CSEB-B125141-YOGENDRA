#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n : ";
    cin>>n;
    //allocating dyanmic memory
    float *arr = new float[n];
    cout<<"enter the elements of array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    float sum = 0,avg; 
    //printing the elements of array
     for(int i=0;i<n;i++){
         sum = sum + arr[i];
     }
    // for count average of numbers
    avg = sum / n;

    cout<<"sum of all number : "<<sum<<endl;
    cout<<"average of all number is : "<<avg<<endl;

    delete[] arr;
    return 0;
    
}