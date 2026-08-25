#include<iostream>
using namespace std;
int larger(int a,int b){
    if(a>b)
      return a;
    else  
      return b;  
}
int larger(int a,int b,int c){
    if(a>b && a>c)
      return a;
    else if(b>a && b>c)  
      return b; 
    else
      return c;  

}
float larger(float a,float b){
    if(a>b )
      return a;
    else   
      return b; 
      
}
int main(){
    int a,b,c;
    float x,y;
    cout<<"enter two integers : ";
    cin>>a>>b;
    cout<<"result = "<<larger(a,b)<<endl;
    cout<<"enter three integers :";
    cin>>a>>b>>c;
    cout<<"result = "<<larger(a,b,c)<<endl;
    cout<<"enter two folat numbers : ";
    cin>>x>>y;
    cout<<"result = "<<larger(x,y);
    return 0;
}