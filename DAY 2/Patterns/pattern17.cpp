#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=i){
            cout<<j;
            j++;

        }
        int s=1;
        int st=i-1;
        while(s<=i-1){
            cout<<st;
            st--;
            s++;
        }
        cout<<endl;
        i++;
    }
}