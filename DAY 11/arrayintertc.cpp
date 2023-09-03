#include<iostream>
using namespace std;
void inter(int arr1[],int arr2[],int n,int m){
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
               cout<<arr1[i]<<" ";
            }
        }
    }
}
int main(){

    int arr1[]={1,6,2,8};
    int arr2[]={6,2,9,7,1};

    inter(arr1,arr2,4,5);

}