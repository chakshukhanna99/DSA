#include<iostream>
using namespace std;
int main(){
    int n=7;
    int left=0;
    int arr[]={1,0,2,0,0,3,0};
    for(int i=0;i<n;i++){
        // if(arr[i]==0){
        //     left=i;
            
        // }
        if(arr[i]!=0){
            swap(arr[i],arr[left]);
            left++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

// void pushZeroesEnd(int *input, int size) {
//   int count = {0}; // Count of non-zero elements

//   // Traverse the array. If element encountered is non-
//   // zero, then replace the element at index 'count'
//   // with this element
//   for (int i = 0; i < size; i++)
//     if (input[i] != 0)
//       input[count++] = input[i]; // here count is
//                              // incremented

//   // Now all non-zero elements have been shifted to
//   // front and  'count' is set as index of first 0.
//   // Make all elements 0 from count to end.
//   while (count < size)
//     input[count++] = 0;
// }