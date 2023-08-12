#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<b;
    int fibo=a+b;

    for(int i=2;i<=n;i++){
        cout<<fibo;
        a=b;    //1
        b=fibo;   //1
        fibo=a+b;  //2
    }
}