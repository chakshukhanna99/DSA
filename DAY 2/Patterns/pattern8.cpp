#include<iostream>
using namespace std;

void pattern1(int n){
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern2(int n){
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j++;
        }
        i++;
        cout<<endl;
    }

}
void pattern3(int n){
    int i=1;

    while(i<=n){
        int j=1;
        int k=n;
        while(j<=n){
            cout<<n-j+1;   //n-j+1  //k
            j++;
            k--;
        }
        i++;
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern1(n);
    pattern2(n);
    pattern3(n);

}