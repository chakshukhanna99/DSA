#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int e=n;
    while(i<=n){
        int j=1;
        char startingChar = 'A'+e-i;
        while(j<=i){
            char ch=startingChar+j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}