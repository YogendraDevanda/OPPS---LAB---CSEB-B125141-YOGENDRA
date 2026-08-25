#include<iostream>
using namespace std;
int total(int arr[],int sum = 0,int n){
    for(int i=0;i<n;i++){
        sum = sum +arr[i];
    }
    return sum;
}
float total(float arr[],int n,float sum = 0.0){
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}
int total(int arr[], int n, int elements)
{
    int sum = 0;

    for (int i = 0; i < elements; i++)
        sum += arr[i];

    return sum;
}
int main()
{
    int n, elements;

    // Integer array
    cout << "Enter size of integer array: ";
    cin >> n;

    int arr[n];

    cout << "Enter integer array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Total of integer array = " << total(arr, n) << endl;

    // Floating-point array
    cout << "\nEnter size of floating-point array: ";
    cin >> n;

    float farr[100];

    cout << "Enter floating-point array elements: ";
    for (int i = 0; i < n; i++){
        cin >> farr[i];
    }

    cout << "Total of floating-point array = "<< total(farr, n) << endl;

    // Portion of integer array
    cout << "\nEnter number of elements to consider: ";
    cin >> elements;

    cout << "Total of first " << elements << " elements = "<< total(arr, n, elements) << endl;

    return 0;
}