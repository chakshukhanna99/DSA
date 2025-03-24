#include<iostream>
using namespace std;
int maxSub(int arr[],int n){
    int maxsum = -1;
    int currsum = 0;
    for(int i=0;i<n;i++){
        currsum = currsum+arr[i];
        maxsum=max(maxsum,currsum);
        if(currsum<0){
           currsum=0;
        }
    }
    return maxsum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=maxSub(arr,n);
    cout<<"ans is "<<ans;
}