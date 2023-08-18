#include<iostream>
using namespace std;
int main(){
    char str1[100];
    char str2[100];
    cin>>str1;
    cin>>str2;
    int store=0;
    int count=0;
    int n=strlen(str1);
    int x=strlen(str2);
    if(n!=x){
        cout<<"false";
    }
    sort(str1,str1+n);
    sort(str2,str2+x);

    if(strcmp(str1,str2)==0){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}