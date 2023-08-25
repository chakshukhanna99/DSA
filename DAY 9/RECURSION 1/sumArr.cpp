#include<iostream>
using namespace std;
int sum(int arr[],int n){
    if(n==0||n==1){
        return n;
    }
    int smallOutput1= (sum(arr, n - 1) + arr[n - 1]);
    return smallOutput1;
}
int main(){
    int arr[]={1,6,7,9,8};
    int n=5;
    int x=sum(arr,5);
    cout<<x<<endl; 
}