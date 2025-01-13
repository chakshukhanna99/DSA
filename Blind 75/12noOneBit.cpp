#include<iostream>
using namespace std;
int findNoOne(int n){
    int cnt=0;
    while(n){
        if(n&1){
            cnt++;
        }
        n=n>>1;
    }
    return cnt; 
}
int main(){
    int n;
    cin>>n;
    int ans=findNoOne(n);
    cout<<ans<<endl;
}