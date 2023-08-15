#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    int start =0;
    int end=n-1;
    int i=1;
    while(start<=end){
        if(i%2!=0){
            arr[start]=i;
            start++;
        }
        else{
            arr[end]=i;
            end--;
        }
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}