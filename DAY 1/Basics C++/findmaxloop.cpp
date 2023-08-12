#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"enter the amount of numbers you want to compare ";
    cin>>n;
    int max=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>=max){
            max =a;
        }
    }
    cout<<max;
}