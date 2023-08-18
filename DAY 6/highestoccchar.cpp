#include<iostream>
using namespace std;
int main(){
    char input[100];
    cin>>input;
    char ans;
    int maxfreq = INT_MIN;
    int n = strlen(input);
    int count[256] = {0};
    for (int i = 0; i < n; i++) {
      count[input[i]]++;
      if (count[input[i]] >= maxfreq) {
        maxfreq = count[input[i]];
        ans = input[i];
      }
    }
    cout<<ans;
}