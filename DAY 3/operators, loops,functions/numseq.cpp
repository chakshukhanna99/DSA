#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prev;
    cin>>prev;

    bool seq_valid = true;
    bool seq_inc = false;

    int i=1;
    while(i<=n-1){
        int curr;
        cin>>curr;
        int diff = curr -prev;

        if(diff==0){
            seq_valid = false;
            break;
        }
        else if(diff>0){
            seq_inc = true;
        }
        else if(diff<0){
            if(seq_inc==true){
                seq_valid = false;
            }
        }
        prev=curr;
        i++;
    }
    if(seq_valid){
      cout<<"true";
    }
    if(!seq_valid){
      cout<<"false";
    }

}


// first dec then inc 
// inc 
// dec
// 5
// 9
// 8
// 4
// 5
// 6
// true
// 3
// 1
// 2
// 3
// true
// 3
// 8
// 7
// 7
// false