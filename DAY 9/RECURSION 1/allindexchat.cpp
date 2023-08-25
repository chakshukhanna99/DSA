#include <iostream>

void findIndexesRecursive(int arr[], int size, int target, int currentIndex, int output[], int &outputIndex) {
    if (currentIndex >= size) {
        return;
    }

    if (arr[currentIndex] == target) {
        output[outputIndex++] = currentIndex;
    }

    findIndexesRecursive(arr, size, target, currentIndex + 1, output, outputIndex);
}

int findAllIndexes(int arr[], int size, int target, int output[]) {
    int outputIndex = 0;
    findIndexesRecursive(arr, size, target, 0, output, outputIndex);
    return outputIndex;
}

int main() {
    int N;
    std::cin >> N;
    int inputList[N];
    for (int i = 0; i < N; i++) {
        std::cin >> inputList[i];
    }

    int targetValue;
    std::cin >> targetValue;

    int outputArray[N]; // Assuming the output array won't be larger than the input array
    int outputSize = findAllIndexes(inputList, N, targetValue, outputArray);

    for (int i = 0; i < outputSize; i++) {
        std::cout << outputArray[i] << " ";
    }

    return 0;
}