#include<iostream>
using namespace std;
int search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
       if(arr[i] == x){
         return i;
       }   
    }
    return -1;
}
char search(char arr[],char x,int n){
    for(int i=0;i<n;i++){
        if(arr[i] = x)
          return i;
    }
    return -1;
}
int search(int arr[], int start, int end, int key)
{
    for (int i = start; i <= end; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}
int main(){
    int n,x;
    cout<<"enter value of n : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements to search : ";
    cin>>x;
    cout<<"enter elments of array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<endl;
    }
    int postion = search(arr,n,x);
    if(postion = -1)
        cout<<"elements is found";

    else
         cout<<"elements is not found ";


    char carr[100];

    cout << "Enter characters: ";
    for (int i = 0; i < n; i++)
        cin >> carr[i];

    char ch;
    cout << "Enter character to search: ";
    cin >> ch;

    char position = search(carr, n, ch);

    if (position != -1)
        cout << "Character found at position " << position + 1 << endl;
    else
        cout << "Character not found." << endl;


    // Search within a range
    int start, end;

    cout << "\nEnter starting index: ";
    cin >> start;

    cout << "Enter ending index: ";
    cin >> end;

    cout << "Enter integer to search within range: ";
    cin >> x;

    position = search(arr, start, end, x);

    if (position != -1)
        cout << "Integer found at position " << position + 1 << endl;
    else
        cout << "Integer not found in the specified range." << endl;

    return 0;
}     