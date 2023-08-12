#include<iostream>
using namespace std;
int main(){
    int n;
    n=55;
  
    int a=0;
    int b=1;
    int flag=0;
    int fibo=a+b;
    for(int i=2;i<=n;i++){
        
        int a=b;
        b=fibo;
        fibo=a+b;
        if(n==fibo)
        flag=1;
    }
    if(flag==1){
        cout<<"number is part of fibonocci series";
    }
    else{
        cout<<"not a part";
    }
}

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     n = 55;

//     int a = 0;
//     int b = 1;
//     int flag = 0;
//     int fibo = a + b;

//     while (fibo <= n) {
//         if (n == fibo) {
//             flag = 1;
//             break;
//         }
//         a = b;
//         b = fibo;
//         fibo = a + b;
//     }

//     if (flag == 1) {
//         cout << "Number is part of Fibonacci series";
//     } else {
//         cout << "Number is not part of Fibonacci series";
//     }

//     return 0;
// }
