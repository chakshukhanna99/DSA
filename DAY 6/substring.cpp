#include<iostream>
using namespace std;
int main(){
    char n[100];
    cin>>n;
    int x =strlen(n);
    int p=0;
    while(p<x){
    for(int i=p;i<x;i++){
        for(int j=p;j<=i;j++){
            cout<<n[j];
        }
        cout<<endl;
    }
    p++;
    }
}