#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of sides of a triangle \n";
    cin>>a>>b>>c;
    if(a==b&&b==c&&c==a)
    cout<<"equilateral triangle";
    else if(a==b||b==c||c==a)
    cout<<"isoceles triangle";
    else
    cout<<"scaler triangle"; 
}