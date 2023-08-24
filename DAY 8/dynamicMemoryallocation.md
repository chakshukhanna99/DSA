NOTES OF DYNAMIC MEMORY LOCATION

int i=a;

int *p=&i;

int * because we want to know ki kitni bytes read krni h

```cpp
int i=65
char c = i
cout<<c<<endl;
implicit type casting

int *p=&i;
char *pc = p. //error ki p k andr bc kiska address pada h char ka ya integer kaa
char * pc = (char *)p.  //compiler bsdk chup ho ja explicit typecasting

cout<<p<<endl;  //address 
cout<<pc<<endl //actual value char pointer

cout<<*p<<endl;   //65
cout<<*pc<<endl.   //a
cout<<*(pc+1).   
cout<<*(pc+1).  
cout<<*(pc+1).  
```

----

#### Void pointer can point to which type of objects ?


all

```other
int main()
{
        int d = 65;
        int i = d;
        char ch = i;
        cout << ch << endl;
}
```


a

```cpp
#include <iostream>
using namespace std;
void updateValue(int *p){
    *p = 610 % 255;
}

int main(){
    char ch = 'A';
    char *pt = &ch;
    updateValue((int*)pt);
    cout << ch;
}
```


```cpp
//referance and pass by referance

referance variables
int i;
i=10;          //int &j; j=i.  can't do that
int j=i;
i++;
cout<<j<<endl; //i od't change alag alag memory hh
int & j =i;


int k=100;
j=k;
cout<<i<<endl;  //100


```


#### What is the correct syntax of declaring and defining a reference?


INT A=10;INT &B=A

```cpp
#include <iostream>
using namespace std;

void func(int p){
    cout << p << " ";
}

int main(){
    int i = 10;
    int &p = i;
    func(p++);
    cout << i;
}
```


10 11

```cpp
#include <iostream>
using namespace std;

void func(int i, int& j, int p){
    i++;
    j++;
    p++;
}

int main(){
    int i = 10;
    int j = 6;
    int &p = i;
    func(i, j, p);
    cout << i << " " << j << " " << p;
}
```


11 6 11

```cpp
int*p=NEW INT;
8 stack 4 heap
int *p=new int[n]
//static mmry auto release dynamc mai maually 
while(true){
int *p=new int[n] new mmry conignous make
}
delete p 4 bye clear

p = new int[]
delete []p;

```


#### In CPP, dynamic memory allocation is done using ______________ operator.


new

#### How will you free the memory allocated by following program -


```other
#include <iostream>
using namespace std;    

int main() {
    int *a = new int;
}
```


delete a

```cpp
int **p=new int* [m]
for i to m

p[i]=new int[n]
for j 0 to n
cin>>p[i][j]
```


#### i ro 10 col.   pre processor diective


2nd row 5 col

for i to m

delete []p[i]

delete [] p

#### How to Dynamically create a Two Dimensional Array in C++?


int* **p=new int*[m]

#### Can we create Jagged Arrays in C++ ?


yes

```other
#include <iostream>
using namespace std;

int main()
{
    int **twoDArray = new int*[10];
    for(int i = 0; i < 10; i++)
        *(twoDArray + i) = new int[10];
}
```


```other
for(int i = 0; i < 10; i++)
    delete [] twoDArray[i];
    delete[] twoDArray;
```


```cpp
#define PI=3.14;  no extra variable. compiler ko phle hi 3.14

//globaal variable bahr var rakh dene ka kabhi nhii krna use by ref pass kra do
```


#### On deleting a dynamic memory, if the pointer value is not modified, then the pointer points to?


the same deleted memory allocation

i= 10;     now add location 400

int j=i;   now add location 500

i++;

cout<<j;   ====10

a method in which it affect j also

dono k lia same memory kese allocate kre bhyi

i bhi 400 j bhi 400

int& j = i;      

j is a referance variable;

j sath k sath ibnitialize krna bhi jaroori h

as of. now we will say it is useless but not remember the function part where we say niche vala change nhi hoga abb isse hoga kyunki hmn direct mmry mai jake change krrr rhe h

#include


using namespace std;

void func(int p){

cout << p << " ";

}

int main(){

int i = 10;

int &p = i;

func(p++);

cout << i;

}

10 11

#include


using namespace std;

void func(int i, int& j, int p){

i++;

j++;

p++;

}

int main(){

int i = 10;

int j = 6;

int &p = i;

func(i, j, p);

cout << i << " " << j << " " << p;

}

10 7 10
----

2 type of mmry stack and heap

program start a base small stack mmry

large heap mmry

int i stack

int a[20000]

bda satck

int n;

cin>>n;

int a[n]

stack se bada toh dikkat 

stack ssstatic compile time

heap dynaamic mmry

new int will make an integer on heap

name nhi hota heap vali mmry ka

new int mmry ka adddlake deta h

int *p = new int;   12 bytes 8 for stack p

jb heap mai mmry bnti h toh kya hota h ki scope of var k hisaab se nhi chlta

scope k hisab se khtm ni hogi dynamic mmry aur loop mai badhti hi jayegi bhyi

static auto release of mmry stack

heap dynamic mannual release

stack k 8 byte mai address hoga heap ka

int *p =. new int 

delete p;  is the address

heap mmry deleted

stack mmry bhi clear hojayegi scope khtm hone pr

p=new int; single element delete

p = new int[100];  array delete

delete [] p;  

doubt

#### On deleting a dynamic memory, if the pointer value is not modified, then the pointer points to?


the same deleted mmry
----
----

dynamic mmry allocation for 2d array

we need to make array of int *.   int[10][20]

10 int* rows because

int *p = new int[10]

int *p = new int *[10];

int **p = new int *[10];

p[0]=new int[20];
----

inline and default arguments

int c = (a>b)?a:b;

```cpp
#include<iostream>
using namespace std;

int x = 1;

void print(){
    int x = 2;
    {
        int x = 3;
        cout << x << endl;
    }
}
int main(){
    print();
    return 0;
}
```


3

```cpp
#include <iostream>
using namespace std;

#define MULTIPLY(a, b) a*b

int main(){
    cout << MULTIPLY(2+3, 3+5);
    return 0;
}
```


"MULTIPLY(a, b)" will be replaced by "a*b" in code.

So, MULTIPLY(2+3, 3+5) will be replaced by 2+3*3+5. And according to operator precedence, multiply operator (*) has higher precedence than plus operator (+).

So, 3*3 will be evaluated first. Hence expression will become :

2+9+5 = 16

```cpp
#include <iostream>
using namespace std;

#define SQUARE(x) x*x

int main(){
    int x = 36 / SQUARE(6);
    cout << x;

    return 0;
}
```


36

inline function

only last can get default value ya last dono beech mai nhi

aall can be default

**const**

const int i=10;

int const i=10;

const ref from a non const int 

int j=12;

const int &k=j;

j++

cout<<k<<endl;

const ref from a const int

int const j2=12;

int const &k2 =j2;

//cant do j2++ or k2++

//refrence. from a const int

int const j3=123;

int &k3= j3;

//k3++ cant read only

int const i=10;

int **const** *p=&i; //p must be there

p is a pointer to a integer const

```other
#include <iostream>
using namespace std;

int main(){
    int  const  p = 5;
    cout << ++p;
    return 0;
}
```


error

```other
#include <iostream>
using namespace std;

int main(){
    int p = 5;
    int const *q = &p;
    p++;
    cout << p << endl;
    return 0;
}
```


6

```other
#include <iostream>
using namespace std;

int main(){
    int p = 5;
    int const *q = &p;
}
```


error *q++

```other
#include <iostream>
using namespace std;

int main(){
    int p = 5;
    int * const q = &p;
}
```


q++ error

```other
#include <iostream>
using namespace std;

int main(){
    int p = 5;
    int const * const q = &p;
}
```


*q++ error

*p++  error

```other
#include <iostream>
using namespace std;

int main(){
    const int p = 5;
    int const *q = &p;
}
```


error p++ *q++
