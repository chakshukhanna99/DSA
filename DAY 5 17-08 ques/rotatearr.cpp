#include<iostream>
using namespace std;
int main(){
    int n=6;
    int d=2;
    int k=0;
    int arr[]={1,2,3,4,5,6};
    int count[100];
  
        for(int j=d;j<n;j++){
            count[k]=arr[j];
            k++;
        }

    for(int i=0;i<d;i++){
        count[k]=arr[i];
        k++;
    }
        for(int i=0;i<n;i++){
        cout<<count[i]<<" ";
    }
}