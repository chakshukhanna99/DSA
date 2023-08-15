#include<iostream>
using namespace std;
void inc(int a,int b[],int n){
    a++;
    b[0]++;
}
int main(){
    // int n;
    // cin>>n;
    int a=10;
    int arr[100]={1,2,3};
    inc(a,arr,100);
    cout<<a<<" "<<arr[0];
}