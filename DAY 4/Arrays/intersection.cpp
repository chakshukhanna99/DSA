#include<iostream>
using namespace std;
void intersection(int arr[],int n,int b[],int x){
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<x;j++){
            if(arr[i]==b[j]){
                cout<<arr[i];
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    int b[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
       for(int i=0;i<x;i++){
        cin>>b[i];
    }
    intersection(arr,n,b,x);
}