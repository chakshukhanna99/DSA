#include<iostream>
using namespace std;
int fmajority(int arr[],int n){
    int el=arr[0];
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i]==el){
          count++;
        }
        else{
            count--;
        }
        if(count==0){
            el=arr[i];
            count=1;
        }
    }
    return el;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int majority=fmajority(arr,n);
    cout<<"majority is "<<majority;
}