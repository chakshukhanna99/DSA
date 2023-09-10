#include<iostream>
using namespace std;
int last(int arr[], int n, int x) {
    if (n == 0) {
        return -1;
    }

    int so = last(arr, n - 1, x); // Call the function recursively on the rest of the array
    if (arr[n - 1] == x) { // Check if the current element is equal to x
        return n - 1; // If yes, return the current index
    }
    return so;
}

int main(){
    int n=5;
    int arr[]={1,2,5,5,14};
   int x = last(arr,n,5);
   cout<<x<<endl;
    
}