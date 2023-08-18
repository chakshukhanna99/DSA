#include<iostream>
using namespace std;
int main(){
    char str[100];
    cin>>str;
    char b;
    cin>>b;
    int x =strlen(str);
    for(int i=0;i<x;i++){
        if(str[i]==b){
            for(int j=i;j<x;j++){
                str[j]=str[j+1];
            }
            x--;
            i--;
        }
    }
    cout<<str;
}