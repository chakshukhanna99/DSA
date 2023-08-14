
####"break" is used to exit from the current loop.


####"return" statement is used to exit from the current function.


####"continue" is used to skip the current iteration of a loop and continue with the next iteration.



Q1

```other
#include <iostream>
using namespace std;
int main() 
{    
         int x, y = 1;
         x = 10;
         if (x != 10 && x / 0 == 0)
            cout << y;
         else
             cout << ++y;
}
```


2

Q2

```other
#include <iostream>
using namespace std;
int main()
{   
    int x = 15;
    int y = x++;
    int z = ++x;
    cout << y << “ “ << z;
}
```


15 17

Q3

```other
#include <iostream>
using namespace std;
int main() 
{        
         int g = 3;
         cout << (++g * 8);
} 
```

32.  g++*8 =24

Q4

```other
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    if(x++ > 10 && ++y > 20 ){
    cout << "Inside if ";
    } else{
    cout << "Inside else ";
    }
    cout << x << “ “ << y;
}
```


x ki value  vhi rahegi badhegi aur print hoga bad mai x==10

ist statement wrong

print krte hue 11 20; inside if

Q5

```other
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    if(x++ > 10 || ++y > 20 ){
    cout << "Inside if ";
    } else{
    cout << "Inside else ";
    }
    cout << x << “ “ << y;
}
```


is baar 21 krne tkk gaya vooo

inside iff 11 21
----

for loop

```other
for(int i = 0; i < 5; i = i + 1){
    cout << i << " ";
    i = i + 1;
}
```


0 2 4

```other
for(int i = 1; i < 5; i = i + 1){
    cout << i << " ";
    i = i - 1;
}
```


infinite 1

```other
for(int i = 0; i < 2; i = i + 1) {
     for(int j = 0; j < 2; j = j + 1) {
          if (j == 1)
              break;
          cout << j << " ";
      }
 } 
```


00

```other
for(int i = 0; i < 5; i = i + 1) {
     if(i == 2) 
           continue;
    cout << i << " ";
 } 
```


0134 skip it continue means
----

```other
int i = 1;
while(i < 5) {
    if(i == 3) {
        break;
    }
    cout << i << " ";
    i++;
}
```


12 break loop se bahr aa jaoo

```other
int i = 1;
while(i < 5) {
    if(i == 3) {
        continue;
    }
    cout << i << " ";
    i++;
}
```


12 infinite looop

```other
int i = 1;
while(i < 3) {
    int j = 1;
    while(j < 5) {
        if(j == 3) {
            break;
        }
        cout << j << " ";
        j++;
    }
    i++;
}
```


1212

```other
int i = 1;
while(i < 3) {
    int j = 0;
    while(j < 5) {
        j++;
        if(j == 3) {
            continue;
        }
        cout << j << " ";
    }
    i++;
}
```


1245 1245
----

```other
#include <iostream>
using namespace std;
int main() 
{    
    int n;
    cin>>n;

    int x=0;
    int y=1;
    int z;

    cout<<x<<" "<<y<<" ";

    for(int i=2;i<=n;i++){
        z=x+y;
        cout<<z<<" ";
        x=y;
        y=z;
    }
    cout<<"\n"<<y;     
} 
```

----

ALL PRIME NUMBERS FROM RANGE

```other
#include <iostream>
using namespace std;

int main(){
	 int n,divided,num;
	 cin>>n;
	 
	 for(num=1;num<=n;num++){
		 divided=0;
	 for(int i=2;i<=num/2;i++){
           if (num % i == 0) {
             divided = 1;
			 break;
           }
         }
                 if(divided==0 && num!=1){
			 cout<<num<<endl;
		 }
	 }
}
```

----

error

```other
#include <iostream>
using namespace std;
int main() {
    int a = 10;
    if(a > 5) {
        int b = 10;
    }
    cout << b << endl;
}

```


error

```other
#include <iostream>
using namespace std;
int main() {
    for(int i = 0; i < 3; i++) {
        cout << i << " ";
    }
    cout << i << " ";
}
```


infinite loop of 1

```other
#include <iostream>
using namespace std; 
int main() {
    int a = 10;
    while(a > 5) {
        int a = 1;
        cout << a << " ";
        a--;
    }
}
```


cin.get() count spaces etc tabs no sc lc

```other
#include<iostream>
using namespace std;

int main(){
	char n;
	int countlc=0;
        int countn = 0;
        int countst = 0;
        while(n!='$'){
		n=cin.get();
                if (n >= 'a' && n <= 'z') {
                  countlc++;
                }
                if (n >= '0' && n <= '9') {
                  countn++;
                }
                if (n == ' ' || n == '\t' || n == '\n') {
                  countst++;
                }
        }
	cout<<countlc<<" "<<countn<<" "<<countst;
}

```


[![pdf](lecture6 operators loops break continue etc.pdf)](https://res.craft.do/user/full/df03ed4f-4af1-7826-400f-71f003504554/doc/AF52667D-4D82-4A09-B105-F745927280E4/989C800D-31B1-46B6-9B82-E2EF050B716C_2/BqcEw5xeb7P93xPI4TmnQn8ihZNUYDrfEq7EUHorR0wz/lecture6%20operators%20loops%20break%20continue%20etc.pdf)
----

```other
#include<iostream>
using namespace std;
int main(){
    int orr = 15|30;
    int andd = 15&30;
    int nott = ~15;
    int xorr = 15^30;
    int lss = 15<<2;
    int rss = 15>>2;
    cout<<orr<<endl;
    cout<<andd<<endl;
    cout<<nott<<endl;
    cout<<xorr<<endl;
    cout<<lss<<endl;
    cout<<rss<<endl;

}
```


SUM OR PRODUCT

```other
#include<iostream>
using namespace std;
int main() {
	int n;
        int product = 1;
        cin>>n;
	int c;
	cin>>c;
	int sum=0;
	if(c==1){
		for(int i=1;i<=n;i++){
			sum=sum+i;
		}
		cout<<sum;
	}
	else if(c==2){
          for (int j = 1; j <= n; j++) {
            product = product * j;
          }
          cout << product;
        }
		else{
			cout<<-1;
		}
}

```


#### Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.

10. 

```other
5 11 14 17 23 26 29 35 38 41
```


```other
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int y;
  int ctr=0;
  for (int i = 1; ctr< n; i++) {
    y = 3 * i + 2;
    if (y % 4 != 0) {
      cout << y << " ";
      ctr++;
    }
  }
}
```


reverse a no.

```other
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int store = 0;

  while (n != 0) {
    int rem = n % 10;
    store= store * 10 + rem;
    n = n / 10;
    
  }
  cout<<store;
}
```


binary to decimal

```other

#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  int num = n;
  int dec_value = 0;
  // Initializing base value to 1, i.e 2^0
  int base = 1;
  int temp = num;
  while (temp!=0) {
    int last_digit = temp % 10;
    temp = temp / 10;

    dec_value += last_digit * base;

    base = base * 2;
  }

  cout<< dec_value;
}

```


square root

```other
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	if(n==1 ){
		cout<<n;
	}
	// else if(n==0){
	// 	cout<<0;
	// }
int i=1,ans=1,a;
while(ans<=n){
	i++;
	ans=i*i;
}
cout<<i-1;
}
```

----

fibonocci number

```other
#include <iostream>
using namespace std;
int main() {
  int N, t1 = 0, t2 = 1, nextTerm = 0, i,flag=0;
  cout << "Enter the n value: ";
  cin >> N;
  int n2;
  cin>>n2;
  if (N == 2 || N == 1)
    cout << 1;
  else{
    for (i = 2; i <= N; ++i) {
      t1 = t2;
      t2 = nextTerm;
      nextTerm = t1 + t2;
      if(nextTerm==n2){
        flag=1;
      }
      cout<<nextTerm<<"\n";
    }
  }
  if(flag==1){
    cout<<"yes\n";
  }
  cout << t2;
}
```


nth fibonocci number
```other
#include<iostream>
using namespace std;
int main()
{
int n, t1 = 0, t2 = 1, nextTerm = 0, i;
// cout << "Enter the n value: ";
cin >> n;
if(n == 0 || n == 1) 
cout << n; 
else{
nextTerm = t1 + t2;
t2=t2;
t1=t1;
for (i = 2; i <= n; ++i) {
  t1 = t2;
  t2 = nextTerm;
  nextTerm = t1 + t2;
}
cout << t2;
}
}
```

