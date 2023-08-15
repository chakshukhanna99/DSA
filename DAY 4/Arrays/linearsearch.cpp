#include<iostream>
using namespace std;

void linear(int a[],int n,int x){
    int flag=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            flag=1;
            cout<<i<<" ";
            count++;
        }
    }
    if(flag==0){
        cout<<-1;
    }
    if(flag==1){
    cout<<"This is count:"<<count;
    }
}
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;

    int arr[100];
    for(int i=0;i<n;i++){
    cin>>arr[i];
}
    linear(arr,n,x);
}