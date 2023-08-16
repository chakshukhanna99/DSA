#include<iostream>
using namespace std;
int binary(int n,int arr[],int x){
    int start =0;
    int end = n-1;

    while(start<=end){
        int mid = (start +end)/2;
        if( arr[mid]==x){
            return mid;
        }
         if(arr[mid]<x){
            start = mid+1;
        }
        else{
            end = mid-1;
        }

    }
    return -1;
    
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
   int z = binary(n,arr,x);
   cout<<z;
}