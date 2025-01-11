#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxProfit(int arr[],int n){
    int maxi=0;
    int maxProfits=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
        maxProfits=max(maxProfits,maxi-arr[i]);
    }
    return maxProfits;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxProfits=maxProfit(arr,n);
    cout<<"max is "<<maxProfits;

    return 0;
}