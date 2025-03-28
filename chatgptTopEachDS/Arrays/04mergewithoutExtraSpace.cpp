#include<iostream>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m) {
    int left = n - 1, right = 0;

    while (left >= 0 && right < m) {
        if (arr1[left] > arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--;
            right++;
        }
        else {
            break;
        }
        
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}
