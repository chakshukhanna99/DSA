SYMBOL TABLE mai store hote h sare variable

ALL VARIABLE NAME

pointers are variables which store address of other variable

machine 64 bit 8

```cpp
#include<iostream>
using namespace std;
int main(){
    int i=10;
    int *p =&i;
    int *q=p;
    cout<<sizeof(p)<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    i++;
    cout<<i<<endl;
    cout<<*p<<endl;
    int a=*p;
    a++;
    cout<<a<<endl;
    cout<<*p<<endl;
    i=12;
        cout<<i<<endl;
    cout<<*p<<endl;
    (*p)++;
    cout<<i<<endl;
    cout<<*p<<endl;

}
```


```other
int. i;
cout<<i++

int*p
cout p
cout<<*p++
```


pointers basic questions

declaration of pointer.  int *x;

memory adderss of a.    &a 

#### Which of the following gives the memory address of variable 'b' pointed by pointer 'a' 


```other
int b = 10;
int *a = &b;
```


a

```other
int a = 100, b = 200;
int *p = &a, *q = &b;
p = q;
```


p now points to b

```other
int a = 7;
int b = 17;
int *c = &b;
*c = 7;
cout  << a << "  “ << b << endl;
```


7 7

```other
 int a = 50;
 int *ptr = &a;
 int *q = ptr;
 (*q)++;
 cout << a  << endl;
```


51

```other
 int a = 50;
 int *ptr = &a;
 cout << (*ptr)++ << “ “;
 cout << a << endl;
```


50 51

```other
int *ptr = 0;
int a = 10;
*ptr = a;
cout << *ptr << endl;
```


error

```other
int a = 7;
int b = 17;
int *c = &b;
*c = 7;
cout  << a << "  “ << b << endl;
```


7 7

```other
float f = 10.5;
float p = 2.5;
float* ptr = &f;
(*ptr)++;
*ptr = p;
cout << *ptr << “ “ << f << “ “ << p;
```

2.5 2.5 2.5

**pointer arithmetic**

```other
int i=10

int *p = &i;

cout<<p<<endl;

p=p+1;

cout<<p<<endl;

```


4 bytes will add to address of a

```other
int a = 7;
int *c = &a;
c = c + 1;
cout  << a << "  " << *c << endl;
```


7 garbage value

```other
int a = 7;
int *c = &a;
c = c + 3;
cout<< c << endl;
```


#### Assume the memory address of variable ‘a’ is 400 (and an integer takes 4 bytes), what will be the output -


412

```other
double a = 10.54;
double *d = &a;
d = d + 1;
cout  << d << endl;
```


208

ARRAYS AND POINTERS\

pointer ko ag se 8 byte nhi

int a[10]

sizeof(a)=40 inside symbol table array of 10

a[0]=5

a[1]=10

a = &a[0]

*a = a[0] = 5

*(a+1)=10

int *p =a[0] tick

```other
int a[5];
int *c;
cout << sizeof(a) << “ “ << sizeof(c);
```


20 8

```other
int a[] = {1, 2, 3, 4};
cout << *(a) << " " << *(a+1);
```


1 2

```other
int a[6] = {1, 2, 3};
cout << a << “ “ << &a;
```


#### Assume that address of 0th index of array ‘a’ is : 200.


200 200

```other
int a[3] = {1, 2, 3};
cout << *(a + 2);
```


3

```other
int a[6] = {1, 2, 3};
int *b = a;
cout << b[2];
```


3

```other
int a[] = {1, 2, 3, 4, 5};
cout << *(a) << " " << *(a + 4);
```


1 5

```other
int a[] = {1, 2, 3, 4};
int *p = a++;
cout << *p << endl;
```


error

character pointer 

int a[] ={1,2,3};

char b[] = “abc"

cout<<a;    print 1address

cout<<b;    print abc

char *c =&b[0]

cout c = abc

char c1= ‘a’

char *pc = &c1

coutc1. a

cout<<pc a garbagetill n

char str[] = “abcde”.   array of size 6

char *pstr = “ancde”.    usi ko pt krr rha h. nhi krna yeh bc

```other
 char ch = 'a';
 char* ptr = &ch;
 ch++;
 cout << *ptr << endl;
```


b

```other
char b[] = "xyz";
char *c = &b[0];
cout << c << endl;
```


xyz

```other
char b[] = "xyz";
char *c = &b[0];
c++;
cout << c << endl;
```


yz

```other
char s[]= "hello";
char *p = s;
cout << s[0] << " " << p[0];
```


h h

pointers and functions

```other
#include<iostream>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}
void incrementPointer(int *p){
    p=p+1;
    // cout<<*p<<endl;
}
void increment(int *p){
    (*p)++;
}
int main(){
    int i=10;
    int *p = &i;
    print(p);
    cout<<p<<endl;
    incrementPointer(p);
    cout<<p<<endl;

    cout<<*p<<endl;
    increment(p);
    cout<<(*p)<<endl;
}
```


10

0x16f82300c

0x16f82300c

10

11

when you pass array to the  function it goes as a pointer thatswhy we can write

int sum(int a[],int size)

int sum(int *a,int size) ek hi baat h

int a[10]

sum(a,10)

sum(a+3,7)

```other
void changeSign(int *p){
  *p = (*p)  *  -1;
}

int main(){
  int a = 10;
  changeSign(&a);
  cout << a << endl;
}
```


-10

```other
void fun(int a[]) {
    cout << a[0] << " ";
}

int main() {
    int a[] = {1, 2, 3, 4};
    fun(a + 1);
    cout << a[0];
}
```


2 1

```other
void square(int *p){
 int a = 10;
 p = &a;
 *p = (*p) * (*p);
}

int main(){
 int a = 10;
 square(&a);
 cout << a << endl;
}
```


10


1.The address of 'a' is passed to the square function as an argument .
2. Inside the square function, a new local variable a is created and now p will store the address of this local variable.
3. The value at the address pointed by 'p'(local variable a) is squared.
4.The value of a inside main function will remain unchanged and thus output will be "10".

double pointers

int i=10

int p=*i;

i**p2=&p

cout<<p2

cout<<&p

same both above

p & *p2 same val &i same values

i and *p and **p2 same thing

```other
int a = 10;
int *p = &a;
int **q = &p;
int b = 20;
*q = &b;
(*p)++;
cout << a << " " << b << endl;
```


p points to a. q points to p directly and a through p (double pointer). *q — value stored in p is changed to address of b instead of that of a. (*p)++ — value that p points to, which now is of b, is incremented by 1 (b becomes 21). Value of a remains unchanged.

10 21

```other
int a = 100;
int *p = &a;
int **q = &p;
int b = (**q)++ + 4;
cout << a << " " << b << endl;
```


101 104


1. int a = 100; sets the value of a to be 100.
2. int *p = &a; creates a pointer p pointing to the address of a.
3. int **q = &p; creates a pointer-to-pointer q pointing to the address of p.
4. int b = (**q)++ + 4; dereferences q twice to get the value of a (100), increments it by 1, and adds 4, resulting in 104. The value of a becomes 101.
5. cout << a << " " << b << endl; prints the values of a and b, which are 101 and 104, respectively.

```other
 int a = 100;
  int *p = &a;
  int **q = &p;
  int b = (**q)++;
  int *r = *q;
  (*r)++;
  cout << a << " " << b << endl;
```

1. int a = 100; sets the value of a to 100.
2. int *p = &a; sets the pointer p to the address of a.
3. int **q = &p; sets pointer q to address of p.
4. int b = (**q)++; Firstly assign the value pointed by **q to b and then increment the value at location **q(a).
5. int *r = *q; sets the pointer r to the address of a (pointed by *q).
6. (*r)++; increments the value of a (pointed by *r).

```other
void increment(int **p){
  (**p)++;
}

int main(){
 int num = 10;
 int *ptr = &num;
 increment(&ptr);
 cout << num << endl;
}
```


11


1. 'num' is initialized with the value 10.
2. 'ptr' is a pointer that stores the address of 'num'.
3. 'increment' function takes a double pointer as an argument, so '&ptr' is passed.
4. Inside the 'increment' function, '**p' refers to the value of 'num', which is incremented by 1.
5. After the function call, the value of 'num' becomes 11.

So, the output for this is "11".
----

```cpp
#include <iostream>
using namespace std;
int main()
{
  int arr[] = {4, 5, 6, 7};
  int *p = (arr + 1);
  cout << *arr + 9;
  return 0;
}
```


13

```cpp
#include <iostream>
using namespace std;
int main ()
{
  int numbers[5];
  int * p;
  p = numbers; 
  *p = 10;
  p = &numbers[2]; 
  *p = 20;
  p--; 
  *p = 30;
  p = numbers + 3;
  *p = 40;
  p = numbers;
  *(p+4) = 50;
  for (int n=0; n<5; n++) {
     cout << numbers[n] << ",";
  }
  return 0;
}
```


10,30,20,40,50,


1. p is assigned to the address of the first element of the array, and *p = 10 sets the first element to 10.
2. p is assigned to the address of the third element, and *p = 20 sets the third element to 20.
3. p is decremented, pointing to the second element, and *p = 30 sets the second element to 30.
4. p is assigned to the address of the fourth element, and *p = 40 sets the fourth element to 40.
5. p is assigned to the address of the first element, and *(p+4) = 50 sets the fifth element to 50.

So, the output is "10 30 20 40 50".

```cpp
#include <iostream>
using namespace std;
int main()
{ 
  char *ptr; 
  char Str[] = "abcdefg";
  ptr = Str;
  ptr += 5;
  cout << ptr;
  return 0;
}
```


fg

Initially ptr will point to 'a'. But as soon as we write ptr+=5, ptr will shift 5 addresses ahead that is it will point to 'f' and thus when we are printing ptr, it will print all the characters starting from 'f' till it encounter NULL character, so output is "fg".

```cpp
#include <iostream>
using namespace std;
int main()
{
  char arr[20];
  int i;
  for(i = 0; i < 10; i++) {
    *(arr + i) = 65 + i;
  }
  *(arr + i) = '';
  cout << arr;
  return 0;
}
```


ABCDEFGHIJ

*(arr + i) is equivalent to arr[i]. Since arr is an character array, so 65 + i will be typecasted to corresponding character for each i from 0 to 9. Since at last , we are appending the NULL character,

so arr will become string and thus we get the output as "ABCDEFGHIJ".

```cpp
#include<iostream>
using namespace std;
void swap (char *x, char *y) 
{
  char *t = x;
  x = y;
  y = t;
}

int main()
{
   char *x = "ninjasquiz";
   char *y = "codingninjas";
   char *t;
   swap(x, y);
   cout<<x << " "<<y;
   t = x;
   x = y;
   y = t; 
   cout<<" "<<x<< " "<<y;
   return 0;
}
```


ninjasquiz codingninjas codingninjas ninjasquiz

```other
#include <iostream>
using namespace std;
int main()
{
  float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 3;
  cout<<*ptr2<<" ";
  cout<< ptr2 - ptr1;
  return 0;
}
```

90.5 3
1. float *ptr1 = &arr[0]; sets ptr1 to point to the first element of the array (12.5).
2. float *ptr2 = ptr1 + 3; sets ptr2 to point to the fourth element of the array (90.5).
3. cout<<*ptr2<<" "; prints the value pointed by ptr2, which is 90.5.
4. cout<< ptr2 - ptr1; calculates the difference between the two pointers, which is 3 (since ptr2 points to the fourth element and ptr1 points to the first element).

```other
#include<iostream>
using namespace std;
int main() {
  char st[] = "ABCD";
  for(int i = 0; st[i] != ‘’; i++) {
     cout << st[i] << *(st)+i << *(i+st) << i[st];
  }
  return 0;
}
```


st[i] is equivalent to *(st+i) and i[st], so all three will print the same thing that is the ith character of the given string.

*(st)+i: prints the  ASCII value of the first character ('A') plus the index i as when character and integer are added, implicit typecasting to integer is done.

So, the output is "A65AAB66BBC67CCD68DD".

```other
#include <iostream>
using namespace std;
void Q(int z)
{
  z += z;
  cout<<z << " ";
}

void P(int *y) 
{
  int x = *y + 2;
  Q(x);
  *y = x - 1; 
  cout<<x << " ";
}

int main()
{
  int x = 5;
  P(&x);
  cout<<x;
  return 0;
}
```


14 7 6


1. In the main function, x is initialized with the value 5.
2. The function P is called with the address of x (&x).
3. Inside P, *y will give the value as 5 and thus local variable x of function P is updated with 7.
4. The function Q is called with the value 7, which doubles it and prints 14.
5. Back in P, x is updated to 7 - 1 = 6, and 7 is printed.
6. Finally, in the main function, the updated value of x (6) is printed.

```other
#include<iostream>
using namespace std;
int main()
{
  int ***r, **q, *p, i=8;
  p = &i;
  (*p)++;
  q = &p;
  (**q)++;
  r = &q;
  cout<<*p << " " <<**q << " "<<***r;
  return 0;
}
```


10 10 10

```other
int f(int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

int main() {
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);
    return 0;
}
```


19


1. When f() is called, x=c=4, *py=*b=4, **ppz=4.
2. **ppz += 1; modifies the value of c to 5.
3. *py += 2; modifies the value of c to 7.
4. x += 3; modifies the value of x to 7.
5. The function returns x+y+z = 7+7+5 = 19.
