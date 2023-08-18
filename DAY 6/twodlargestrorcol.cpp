#include<iostream>
using namespace std;
void largest(int arr[][100],int m,int n){
    int sum1=0;
    int store1=0;
    int largest1=0;
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum1=sum1+arr[i][j];
            if(sum1>largest1){
                store1=i;
                largest1=sum1;
            }
        }
        
        sum1=0;
        cout<<endl;
    }
    // cout<<"largest row is: "<<store1<<" "<<largest1;

int store2=0;
int largest2 =0;
int sum2=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum2=sum2+arr[j][i];
            if(sum2>largest2){
                store2=i;
                largest2=sum2;
            }
        }
        
        sum2=0;
        cout<<endl;
    }
    // cout<<"largest column is:"<<store2<<" "<<largest2;

    if(largest1>largest2){
        cout<<"row"<<" "<<store1<<" "<<largest1;
    }
    if(largest2>largest1){
        cout<<"column"<<" "<<store2<<" "<<largest2;
    }
}
int main(){
    int arr[100][100];
    int n;
    int m;
    cin>>m>>n;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    largest(arr,m,n);
}
// void findLargest(int **input, int nRows, int mCols)
// {
//     //Write your code here
//     int maxSum = INT32_MIN, index = 0;
//     int *arr = new int[mCols], flag = 0;
//     // Flag -> 0 rows, Flag -> 1 cols

//     for (int i = 0; i < nRows; i++) {
//       int sum = 0;
//       for (int j = 0; j < mCols; j++) {
//         sum += input[i][j];
//         arr[j] += input[i][j];
//       }
//       if (sum > maxSum) {
//         maxSum = sum;
//         index = i;
//       }
//     }

//     for (int i = 0; i < mCols; i++) {
//       if (arr[i] > maxSum) {
//         maxSum = arr[i];
//         index = i;
//         flag = 1;
//       }
//     }

//     flag ? cout << "column " << index << " " << maxSum << endl
//          : cout << "row " << index << " " << maxSum << endl;
// }



// #include<iostream>
// using namespace std;

// void largest(int arr[][100], int m, int n) {
//     int maxSum = 0;
//     int maxIndex = -1;
//     char direction = ' ';  // 'R' for row, 'C' for column

//     for (int i = 0; i < m; i++) {
//         int rowSum = 0;
//         int colSum = 0;
//         for (int j = 0; j < n; j++) {
//             rowSum += arr[i][j];
//             colSum += arr[j][i];
//         }
//         if (rowSum > maxSum) {
//             maxSum = rowSum;
//             maxIndex = i;
//             direction = 'R';
//         }
//         if (colSum > maxSum) {
//             maxSum = colSum;
//             maxIndex = i;
//             direction = 'C';
//         }
//     }

//     if (direction == 'R') {
//         cout << "row " << maxIndex << " " << maxSum;
//     } else if (direction == 'C') {
//         cout << "column " << maxIndex << " " << maxSum;
//     }
// }

// int main() {
//     int arr[100][100];
//     int n, m;
//     cin >> m >> n;

//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     largest(arr, m, n);
//     return 0;
// }
