#include <iostream>
using namespace std;
void mergeSortedArrays(int arr1[], int m, int arr2[], int n, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int array1[] = {1, 3, 5, 7};
    int m = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {2, 4, 6, 8};
    int n = sizeof(array2) / sizeof(array2[0]);

    int mergedArray[m + n];

    mergeSortedArrays(array1, m, array2, n, mergedArray);

    for (int i = 0; i < m + n; i++) {
        cout << mergedArray[i] << " ";
    }

    return 0;
}
