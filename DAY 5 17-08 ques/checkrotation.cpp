#include<iostream>
using namespace std;
int main(){
    int n=6;
    int arr[]={5,6,1,2,3,4};
    int count =0;
    int x=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            x=i+1;
            break;
        }
       
    }
    cout<<x;
}

// int arrayRotateCheck(int *input, int size)
// {
//     //Write your code here
//         int min=input[0];
//     int count=0;
//     for(int i=0;i<size;i++){
//         if(input[i]<min){
//             min=input[i];
//             count=i;
//         }
//     }
//     // cout<<count;
//     return count;
// }