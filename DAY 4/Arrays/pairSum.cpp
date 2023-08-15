#include<iostream>
using namespace std;
void pairSum(int n,int arr[],int b){
    int count =0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==b){
            count++;
        }
    }
}
cout<<count;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int b;
    cin>>b;
    pairSum(n,arr,b);
    
}