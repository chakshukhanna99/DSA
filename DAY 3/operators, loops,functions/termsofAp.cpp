#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    int ctr=0;
    for(int i=1;ctr<n;i++){
         x = 3*i+2;

         if(x%4!=0){
            cout<<x<<" ";
            ctr++;
         }
    }
}