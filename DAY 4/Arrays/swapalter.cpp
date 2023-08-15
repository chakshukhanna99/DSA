#include<iostream>
using namespace std;
void swapalter(int arr[],int n){
    int i=0;
    int j=1;
    while(i<n-1){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        // cout << arr[i];
        i=i+2;
        j=j+2;
        

    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapalter(arr,n);
       for(int i=0;i<n;i++){
        cout<<arr[i];
    }

  
}