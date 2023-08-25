#include<iostream>
using namespace std;
int first(int arr[],int n,int m){
    if(arr[0]==m){
        return 0;
    }
    else if(n==0){
        return -1;
    }
    else if(arr[0]!=m){
        return -1;
    }
    int so = first(arr+1,n-1,m)+1;
    return so;
}
int main(){
    int n=5;
    int arr[]={1,2,5,9,14};
   int x = first(arr,n,15);
   cout<<x<<endl;
    
}

// int firstIndex(int input[], int size, int x)
// {
//  	if(size == 0)
//     {
//         return -1;
//     }
//     if(input[0] == x)
//     {
//         return 0;
//     }
    
//     int ans = firstIndex(input+1, size-1, x);
    
//     if(ans == -1)
//     {
//         return -1;
//     }
//     else
//     {
//         return ans+1;
//     }
// }
