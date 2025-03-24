#include<iostream>
using namespace std;
vector<int> countBits(int n){
    vector<int> result(n + 1);
    for (int i = 0; i <= n; i++) {
      int count = 0;
      int num = i;
        // Count the number of 1's in the binary representation of num
      while (num > 0) {
        count += (num & 1); // Increment count if the last bit is 1
        num >>= 1;          // Right shift to check the next bit
      }
        
       result[i] = count; // Store the count in the result vector
    }
    
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans=countBits(n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

}