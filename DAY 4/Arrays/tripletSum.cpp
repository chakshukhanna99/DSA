#include<iostream>
using namespace std;
void tripletSum(int n,int arr[],int b){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==b){
                    count++;
                }
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
    tripletSum(n,arr,b);
}