#include<iostream>
using namespace std;
int length(char n[]){
    if(n[0]=='\0'){
        return 0;
    }
    int so = length(n+1);
    return so+1;
}
int main(){
     char n[120];
     cin>>n;
     int x = length(n);
     cout<<x;


}