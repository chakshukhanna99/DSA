#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n;
        while(j>=i){   //j<=n-i+1
            cout<<n-i+1;
            j--;

        }
        i++;
        cout<<endl;
    }
}