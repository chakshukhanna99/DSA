#include<iostream>
using namespace std;
int findAdd(int a,int b){
    int carry = a&b;
    int sumWithoutCarry = a^b;
    int actualCarry = carry<<1;
    while(carry!=0){
        carry=sumWithoutCarry&actualCarry;
        sumWithoutCarry=sumWithoutCarry^actualCarry;
        actualCarry=carry<<1;
    }
    return sumWithoutCarry;

}
int main(){
    int a;
    int b;
    cin>>a>>b;
    int ans = findAdd(a,b);
    cout<<ans<<endl;
}