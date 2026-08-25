#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}
float add(float a,float b){
    return a+b;
}
int main(){
    int a,b,c;
    float x,y;
    cout<<"enter two integers : ";
    cin>>a>>b;
    cout<<"result = "<<add(a,b)<<endl;
    cout<<"enter three integers :";
    cin>>a>>b>>c;
    cout<<"result = "<<add(a,b,c)<<endl;
    cout<<"enter two folat numbers : ";
    cin>>x>>y;
    cout<<"result = "<<add(x,y);
    return 0;
}