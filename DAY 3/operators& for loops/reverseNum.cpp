#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int newNum=0;
    while(n!=0){
      int  rem =n%10;
        newNum = newNum*10+rem;
        n=n/10;

    }
    cout<<newNum;
}