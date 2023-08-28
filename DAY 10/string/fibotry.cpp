#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0||n==1){
        return n;
    }
    // int so1 = fibo(n-1);
    // int so2= fibo(n-2);
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cin>>n;
    int x = fibo(n);
    cout<<x;
}