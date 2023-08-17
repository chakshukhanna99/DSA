#include<iostream>
using namespace std;
int main(){
    char n[100];
    cin>>n;
    int x = strlen(n);
    int start =0;
    int end = x-1;
    while(start<end){
        swap(n[start],n[end]);
        start++;
        end--;
    }
    cout<<n;


}