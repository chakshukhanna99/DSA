#include<iostream>
#include<vector>
using namespace std;
bool containsDuplicate(int arr[],int n) {
    sort(arr,arr+n);
    for(int index = 1; index < n; index++) {
        if(arr[index ] == arr[index - 1]) {
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans = containsDuplicate(arr,n);
    cout<<ans;
}