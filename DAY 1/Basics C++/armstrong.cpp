#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
  
    int newNumber=0;
    while(n!=0){
        int rem=n%10;
        newNumber = newNumber+pow(rem,3);
        n=n/10;
    }
    cout<<newNumber;
}