#include<iostream>
using namespace std;
void reverse(int n,int arr[]){
    int i=0;
    int j=n-1;
    while (i<=j){
        // swap(arr[i],arr[j]);
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;j--;
        }
            
for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(n,arr);


}