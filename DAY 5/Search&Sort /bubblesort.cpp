#include<iostream>
using namespace std;
void bubble(int arr[],int n){
    for(int j=0;j<n-1;j++){
    for(int i=0;i<n-1-j;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
}
int main(){
    int n=5;
    int arr[]={6,4,2,5,1};
    bubble(arr,n);
    for(int i=0;i<n;i++ ){
        cout<<arr[i];
    }
}