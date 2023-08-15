#include<iostream>
using namespace std;
int unique(int n,int arr[]){
    int count=0,store =0;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
                store = arr[i];
            }
        }
        if(count==1){
            store =arr[i];
            break;
        }
        else{
            count=0;
        }
    }
  return store;
    //Write your code here
    // int i, j, count = 0, r;
    // for (i = 0; i < size; i++) {
    //   for (j = 0; j < size; j++) {
    //     if (arr[i] == arr[j])
    //       count++;
    //   }
    //   if (count != 1) {
    //     r = arr[i];
    //     break;
    //   } else
    //     count = 0;
    // }
    // return r;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int x = unique(n,arr);
   cout<<x;
}