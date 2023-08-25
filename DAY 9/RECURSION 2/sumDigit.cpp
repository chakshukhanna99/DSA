#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    // if(n<10){
    //     return n;
    // }
    int so = sum(n/10);
    return n%10+so;
}
int main(){
    int n;
    cin>>n;
    int x = sum(n);
    cout<<x<<endl;
}