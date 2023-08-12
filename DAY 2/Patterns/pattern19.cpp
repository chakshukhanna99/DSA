#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        int k=1;
        int st=i;
        while(k<=i){
            cout<<st;
            st++;
            k++;
        }
        
        j=i-1;
        int start = i+j-1;
        while(j>=1){
            cout<<start;
            start--;
            j--;
        }
        i++;
        cout<<endl;
    }
}