// #include<iostream>
// using namespace std;
// int last(int arr[],int n,int x){
//     if(n==0){
//         return -1;
//     }

//     int so = last(arr+1,n-1,x)+1;
//        if(arr[n-1]==x){
//         return n-1;
//     }
//      else if(arr[0]!=x){
//         return -1;
//     }
//     return so;

// }
// int main(){
//     int arr[] = {1,6,13,6,5};
//     int n=5;
//     int x = last(arr,n,6);
//     cout<<x;
// }

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
int lastIndex(int input[], int size, int x) {
    size--; // Decrement size to get the correct index

    if (size < 0) { // Base case: Array is empty
        return -1;
    }
    if (input[size] == x) { // Base case: Element found at index size
        return size;
    }

    return lastIndex(input, size, x); // Recursive case: Continue with a smaller size
}
// int approach(int arr[],int n,int x){
//     if(n==0){
//         return -1;
//     }
//     else if(arr[n-1]==x){
//         return n-1;
//     }
//     int so=approach(arr+1,n-1,x);
//     return so+1;   
// }
int main() {
    int arr[] = {5, 6, 13, 6, 5};
    int n = 5;
    int x = last(arr, n, 6);
    int y= lastIndex(arr,n,5);
    // int z= approach(arr,n,1);
    cout << x<<y;
}
