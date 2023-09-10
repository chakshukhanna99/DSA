#include<iostream>
using namespace std;
int count(int n){
    if(n==0){
        return 1;
    }
    if(n<10){
        return 0;
    }
    if(n%10==0){
    return  count(n/10)+1;
    }
    else{
        return count(n/10);
    }
}
int main(){
    int n;
    cin>>n;
    int x = count(n);
    cout<<x;
}