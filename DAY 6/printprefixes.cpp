#include<iostream>
using namespace std;
int main(){
char n[100];
cin>>n;
int len = strlen(n);
for(int i=0;i<len;i++){
    for(int j=0;j<=i;j++){
        cout<<n[j]<<" ";
    }
    cout<<endl;
}

}