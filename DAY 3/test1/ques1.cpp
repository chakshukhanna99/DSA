//    1
//   212
//  32123
// 4321234

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        int k=1;
        int st=i;
        while(k<=i){
            cout<<st;
            st--;
            k++;
        }
        int s=1;
        int str=2;
        while(s<=i-1){
            cout<<str++;
            s++;
        }
        i++;
        cout<<endl;
    }
}