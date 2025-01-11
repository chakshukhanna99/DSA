#include<iostream>
#include<vector>
using namespace std;
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]
vector<int> productExceptSelfs(int arr[],int n){
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);
    vector<int> ans(n,1);
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]*arr[i-1];
    }
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]*arr[i+1];
    }
    for(int i=0;i<n;i++){
        ans[i]=prefix[i]*suffix[i];
    }
    return ans;
}
vector<int> productExceptSelf(int arr[],int n){
    vector<int> ans(n,1);
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*arr[i-1];
    }
     int suffix=1;
    for(int i=n-2;i>=0;i--){
        suffix*=arr[i+1];
        ans[i]*=suffix;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans= productExceptSelf(arr,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

}