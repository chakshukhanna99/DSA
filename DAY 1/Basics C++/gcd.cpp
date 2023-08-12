#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter 2 values:\n";
    cin>>a>>b;
    int gcd =0;
    for(int i=0;i<=a&&i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd =i;
        }
    }
    cout<<gcd;
}