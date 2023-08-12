#include<iostream>
using namespace std;
int main(){
    int S,E,W,cel;
    cin>>S>>E>>W;
    int i = S;
    while(i<=E){
        cel = (5.0/9)*(i-32);
        cout<<i<<" "<<cel<<endl;
        i=i+W;
    }
}