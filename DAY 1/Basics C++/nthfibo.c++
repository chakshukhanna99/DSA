#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;int b=1;
    int fibo=a+b;
    if(n==1){
        cout<< 0;
    }
    if(n==2){
        cout<< 1;
    }
    else{
    for(int i=2;i<=n;i++){
        fibo=a+b;
        a=b;
        b=fibo;
        if(i==n){
            cout<<fibo;
        }
    }
    }
}