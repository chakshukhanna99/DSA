//Character array pattern
#include <iostream>
using namespace std;

void func(char a[],int n){
    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            for(int j=i;j<=k;j++){
                cout<<a[j];
            }
            cout<<"\n";
        }
    }
}

int main() {
    char a[]={'a','b','c'};
    int n=3;
    func(a,n);

    return 0;
}