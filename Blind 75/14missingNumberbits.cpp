#include<iostream>
using namespace std;
int missingNumber(int arr[],int n){
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = missingNumber(arr,n);
    cout<<ans;
}