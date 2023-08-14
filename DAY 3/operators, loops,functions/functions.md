Functions

PROBLEM IN DEBUGGING

CODE BULKY

REWRITING OF CODE 

READIBILIITY

```other
#include<iostream>
using namespace std;
int main(){
    int n,r;
    cin>>n>>r;
    int fact_n=1;
    int i=1;
    while(i<=n){
        fact_n=fact_n*i;
        i++;
    }
        int fact_r=1;
       i=1;
    while(i<=r){
        fact_r=fact_r*i;
        i++;
    }
    int fact_n_r=1;
    i=1;
    while(i<=n-r){
        fact_n_r=fact_n_r*i;
        i++;
    }
    cout<<fact_n/(fact_r*fact_n_r);
} 
```


CODE WITH FUNCTION INT RETURN TYPE

```other
#include<iostream>
using namespace std;

    int factorial(int n){
    int ans=1;
    int i=1;
    while(i<=n){
        ans =ans*i;
        i++;
    }
      return ans;
    }
  
    int main(){
        cout<<factorial(5);
    }
```


PRIME NUMBER BOOL FUNCTION CODE

```other
#include<iostream>
using namespace std;
bool primenumber(int n){
    int i=2;
    while(i<n){
        if(n%i==0){
            return false;
        }
        i++;
    }
    return true;
}
int main(){
    // int n;
    // cin>>n;
    bool ans = primenumber(31);
    cout<<ans;
```


VOID FUNCTION TYPE TO PRINT AND CALL FUNCTION DIRECTLY

```other
#include<iostream>
using namespace std;
void printn(int n){
    for(int i=1;i<=n;i++){
        cout<<i;
    }
}
int main(){
    printn(32);
}
```


GIVING 2 VALUES INSIDE FUNCTION

```other
#include<iostream>
using namespace std;
int multiply(int a,int b){
    int c = a*b;
    return c;
}
int main(){
   cout<< multiply(2,3);
}
```


EXTRA Q

```other
    void func(int a, int b){
    cout << (a + b);
    }

    int main() {
    int a = 7;
    func(a, 12);
    }
19
```


Q

```other
void demo(int a, int b){
    cout << a << " " << b;
}

int main() {
    int a = 5;
    int b = 15; 
    demo(a);
}
ERROR
```

----
----

```other
#include<iostream>
using namespace std;
void printTable(int start, int end, int step) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
     int cel;
     int i=start;
     while (i <= end) {
       cel = (5.0 / 9) * (i - 32);
       cout << i << " " << cel << endl;
       i = i + step;
     }
}



```


Q2

```other
#include<iostream>
using namespace std;
bool checkMember(int n){
  int a = 0;
  int b = 1;
  int nt = a + b;
  int c, i;
  while (i <= 1000000) {
    a = b;
    b = nt;
    nt = a + b;
    if(n==0 || n==1){
      return true;
    }
    if (nt == n) {
      return true;
    }
    i++;
  }
  return false;
  }
```

----

error code scope of variable

```other
#include <iostream>
using namespace std;
void func(int a) {
    int b = a;
    b = b + 10;
}

int main() {
    int a = 10;
    func(a);
    cout << b << endl;
}

```


2

```other
using namespace std;

void func(int a) {
    int b = 10;
    a = b + 10;
    cout << a << " ";
}

int main() {
    int a = 10;
    func(a);
    cout << a << " ";
}
20 10
```


[![pdf](0000000000000031.pdf)](https://res.craft.do/user/full/df03ed4f-4af1-7826-400f-71f003504554/0016A3C2-0162-470C-B24B-81D1B9217EA2_2/tRQH3SXu38D7nduclK4WyirUyc9s0JyIv6ySFQSA9x4z/0000000000000031.pdf)
