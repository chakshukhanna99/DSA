#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int decimal=0;
    while(n!=0) {    //1
        int rem=n%10;
        
        if(rem==1){
            decimal = decimal+pow(2,count);
        }
        n=n/10;
         count++;
    }
    cout<<decimal;

}  





// // Function to convert binary to decimal
// // C++ program to convert binary to decimal
// #include <iostream>
// using namespace std;

// // Function to convert binary to decimal
// int main() {
//   int n;
//   cin>>n;
//   int num = n;
//   int dec_value = 0;

//   // Initializing base value to 1, i.e 2^0
//   int base = 1;

//   int temp = num;
//   while (temp!=0) {
//     int last_digit = temp % 10;
//     temp = temp / 10;

//     dec_value += last_digit * base;

//     base = base * 2;
//   }
//   cout<< dec_value;
// }

