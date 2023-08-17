#include<iostream>
using namespace std;
int main(){
    char n[100];
    cin>>n;
    char a,b;
    cin>>a;
    cin>>b;
    int x = strlen(n);
    for(int i=0;i<x;i++){
        if(n[i]==a){
            n[i]=b;
        }
    }
    cout<<n;
}