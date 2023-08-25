#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    if(n==0||n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    bool isSmallerSorted = issorted(arr+1,n-1);
    return isSmallerSorted;
}
int main(){
    int arr[]={1,6,7,9,8};
    int n=5;
    if (issorted(arr , 5)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}