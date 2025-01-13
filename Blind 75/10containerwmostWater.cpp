#include<iostream>
using namespace std;

//10^5 = 10^10>10^8
int brutheforce(int arr[],int n){
    int maxW=INT_MIN;
    for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
            int w=j-i;
            int h=min(arr[j],arr[i]);
            int area=w*h;
            maxW=max(maxW,area);
      }
    }
    return maxW;
}
int twopointer(int height[],int n){
    int lp=0;
    int rp=n-1;
    int maxW=0;
    while(lp<rp){
        int w=rp-lp;
        int h=min(height[lp],height[rp]);
        int area=w*h;
        maxW=max(maxW,area);
        height[lp]<height[rp]?lp++:rp--;
    }
    return maxW;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=twopointer(arr,n);
    cout<<ans;
}