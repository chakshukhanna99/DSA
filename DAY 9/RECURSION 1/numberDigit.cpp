#include<iostream>
using namespace std;
int number(int n){
    if(n/10==0){
        return 1;
    }
    int smallOutput=number(n/10);
    return 1 +smallOutput;
}
int main(){
    int n;
    cin>>n;
    int x = number(n);
    cout<<x;
}