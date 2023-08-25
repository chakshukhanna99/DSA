#include<iostream>
using namespace std;
int multiply(int n,int m){
    if(m==0){
        return 0;
    }
    // else if(n==1){
    //     return m;
    // }
    // else if(m==1){
    //     return n;
    // }
    int so = multiply(n,m-1);
   
    return n+so;
}
int main(){
    int n;
    int m;
    cin>>n>>m;
    int x = multiply(n,m);
    cout<<x;
}