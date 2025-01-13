#include<iostream>
using namespace std;
int findminIn(int arr[],int n){
    int low=0;
    int high=n-1;
    int ans=INT_MAX;
    while(low<=high){
        int mid= (low+high)/2;
        if(arr[low]<arr[mid]){
            ans=min(ans,arr[low]);
            low=mid+1;
        }
        else{
            ans=min(ans,arr[mid]);
            high=mid-1;
        }
    }
    return ans;
}
int main(){
    //34512
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mins=findminIn(arr,n);
    cout<<mins;
}