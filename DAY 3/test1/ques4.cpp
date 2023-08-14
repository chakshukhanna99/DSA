#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int val=1;
    while(i<=n){
    
        int j=1;
        int k=1;
        while(j<=n-i+1){
            cout<<k;
            k++;
            j++;
        }
        int s=1;
        while(s<=2*(i-1)){
            cout<<"*";
            s++;
        }
         j=1;
        int st=n-i+1;
        while(j<=n-i+1){
            cout<<st;
            st--;
            j++;
        }
        cout<<endl;
        i++;
    }
}