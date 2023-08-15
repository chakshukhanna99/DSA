#include<iostream>
using namespace std;
int duplicate(int arr[],int n){
    int count =0,store=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count ++;
            }
        }
        if(count!=1){
            store = arr[i];
            break;
        }
    }
    return store;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int d = duplicate(arr,n);
   cout<<d;
}