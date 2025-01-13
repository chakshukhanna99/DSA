#include<iostream>
#include<limits>
using namespace std;
int maxMulSub(int arr[],int n){
    int pre = 1, suff = 1;
      int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (pre == 0) pre = 1;
        if (suff == 0) suff = 1;
        pre *= arr[i];
        suff *= arr[n - i - 1];
        ans = max(ans, max(pre, suff));
    }
    return ans;
}

  int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProduct=nums[0];
        for(int i=0;i<n;i++){
            int product=nums[i];
            for(int j=i+1;j<n;j++){
                 maxProduct=max(product,maxProduct);
                product=product*nums[j];
            }
             maxProduct=max(product,maxProduct);
        }
        return maxProduct;
        
    }

    //   int n = arr.size(); //size of array.

    // int pre = 1, suff = 1;
    // int ans = INT_MIN;
    // for (int i = 0; i < n; i++) {
    //     if (pre == 0) pre = 1;
    //     if (suff == 0) suff = 1;
    //     pre *= arr[i];
    //     suff *= arr[n - i - 1];
    //     ans = max(ans, max(pre, suff));
    // }
    // return ans;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi= maxMulSub(arr,n);
    cout<<maxi;
}