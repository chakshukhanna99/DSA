#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
//{2,6,5,8,11}
vector<int> twoSum(int arr[],int n,int sum){
    unordered_map<int,int> mp;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(mp.find(sum-arr[i])!=mp.end()){
            ans.push_back(mp[sum-arr[i]]);
            ans.push_back(i);
            return ans;
        }
        else{
            mp[arr[i]]=i;
        }
    }
    if(ans.size()==0){
        ans.push_back(-1);
        ans.push_back(-1);
    }
    return ans;
}
string twoSums(int n, vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}

string twoSumn2(int n, vector<int> &arr, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) return "YES";
        }
    }
    return "NO";
}
int main(){
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans=twoSum(arr,n,sum);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}