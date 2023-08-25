#include<iostream>
using namespace std;
int main(){

       int nn=0;
    int x=121;
    while (x>0)
    {
            int rem=x%10;
            nn=nn*10+rem;
            x=x/10;
    }
    cout<<nn<<" ";
       if(x!=nn){
           cout<< "f";
        }
        else{
            cout<< "t";
        }
    

}