#include<iostream>
using namespace std;
bool ispresent(int arr[],int n,int m){
    n--;
    if(n<0){
        return false;
    }
    if(arr[n]==m){
        return true;
    }
return ispresent(arr,n,m);

}
int main(){
     int arr[]={1,6,7,9,8};
    int n=5;
    if (ispresent(arr , 5,8)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
}