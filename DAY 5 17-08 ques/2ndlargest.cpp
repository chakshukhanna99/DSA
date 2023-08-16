#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        
        }
  
    }
    int max1=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max1&&arr[i]<max){
            max1=arr[i];
        }
    }
    cout<<max1;
}