#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int val=1;
    while(i<=n){
        int s=1;
        while(s<=n-i){
            cout<<" ";
            s++;
        }
        int j=1;
        while(j<=i){
            cout<<val;
            j++;
            val++;
        }
        cout<<endl;
        i++;
    }
}