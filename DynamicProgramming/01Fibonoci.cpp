#include<iostream>
using namespace std;
//011235
//declare dp n+1
int fiboRec(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fiboRec(n-1)+fiboRec(n-2);
}
// tc o(n) sc o(n)
int fiboHelper(int n,vector<int> &dp){
     if(n<=1){
        return n;
    }
    if(dp[n]!=-1) return dp[n];
    return dp[n]= fiboHelper(n-1,dp)+fiboHelper(n-2,dp);
}
int fib(int n) {
    vector<int> dp(n+1,-1);
    return fiboHelper(n,dp);
}
int main(){
    int a;
    cin>>a;
    int ans=fib(a);
    cout<<ans;
}