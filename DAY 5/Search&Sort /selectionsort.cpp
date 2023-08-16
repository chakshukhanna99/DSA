#include<iostream>
using namespace std;
void selection(int arr[],int n){

  
    for(int j=0;j<n-1;j++){
            int min =arr[j];  int minIndex =j;
    for(int i=j+1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            minIndex=i;
            }
        }
        int temp=arr[j];
        arr[j]=arr[minIndex];
        arr[minIndex] =temp ;
    }
}
int main(){
    int n=5;
    int arr[]={1,6,3,4,5};
    selection(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}