#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N";
    cin>>n;
    int k=1;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<k<<" ";
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
}