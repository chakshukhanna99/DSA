#include<iostream>
using namespace std;
float gs(int n){
    if(n==0){
        return 1;
    }
    float so = gs(n-1);
    return so+pow(1.0/2.0,n);
}
int main(){
    int n;
    cin>>n;
    float x = gs(n);
    cout<<x;
}



// function to find the sum of given series
// double sum(int n)
// {
//     // base case
//     if (n == 0)
//         return 1;
 
//     // calculate the sum each time
//     double ans = 1 / (double)pow(3, n) + sum(n - 1);
 
//     // return final answer
//     return ans;
// }