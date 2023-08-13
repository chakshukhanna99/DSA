Q1

column ki condition k lia phli row mai kitne columns h vo dekhakar chakshu pgl

triangle :: row

square :: n

```other
4444
4444
4444
4444

22
22

```


```other
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int row=1;
	while(row<=n){
		int column=1;
		while(column<=n){
			cout<<n;
			column++;
		}
		cout<<endl;
		row++;
	}
}

```


q

```other
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n=5;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<n-col+1;
            col++;
        }
        cout<<endl;
        row++;
    }
}
```


Q2

```other
*
**
***
****

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int row=1;
	while(row<=n){
		int column=1;
		while(column<=row){
			cout<<"*";
			column++;
		}
		cout<<endl;
		row++;
	}
}
```


Q3

```other

1
22
333
4444

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int row=1;
	while(row<=n){
		int column=1;
		while(column<=row){
			cout<<row;
			column++;

		}
		cout<<endl;
		row++;
	}
}
```


Q4

```other
1
21
321
4321

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int row=1;
	while(row<=n){
		int column=1;
		// int val=1;
		while(column<=row){
			cout<<(row+1)-column;
			column++;;
			// val++;
		}
		cout<<endl;
		row++;
	}
}
```


Q5

```other
A
BB
CCC

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int column=1;
        char ch = 'A' + row - 1;

        while(column<=row){
          
          cout << ch;
          column++;
        }
        cout<<endl;
        row++;
    }
}
```


Q6

```other
A
BC
CDE
DEFG

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int row=1;
  while(row<=n){
	  int column=1;
	  char start='A'+row-1;
	  while(column<=row){
		  char ch=start+column-1;
		  cout<<ch;
		  column++;
	  }
	  cout<<endl;
	  row++;
  }
}
```


Q7

```other
E
DE
CDE
BCDE
ABCDE

#include<iostream>
using namespace std;
int main() {
     int n;
     cin>>n;
     int row=1;
     while(row<=n){
         int column=1;
         char start='A'+n-row;
         while(column<=row){
             char ch=start+column-1;    //.
             cout<<ch;         //ch++
             column++;
         }
         cout<<endl;
         row++;
     }
    
}
```

----
----
----
----
----
----
----

```other
   1
  12
 123
1234

#include<iostream>
using namespace std;
int main(){
         int n;
         cin >> n;
         int row = 1;
         while (row <= n) {
           int spaces = 1;
           while (spaces <= n-row) {
             cout << " ";
             spaces++;
           }
           int column = 1;
           while (column <= row) {
             cout << column;
             column++;
           }
           cout << endl;
           row++;
         }
       }


```


Q2

```other
4444
333
22
1
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int row=1;
	while(row<=n){
		int column=1;
		while(column<=n-row+1){
			cout<<n-row+1;

			column++;
		}
		cout<<endl;
		row++;
	}  
}
```


Q3

Q3

```other
5
    1
   121
  12321
 1234321
123454321

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int spaces =1;
        while(spaces<=n-row){
            cout<<" ";
            spaces++;
        }
        int column=1;
        while(column<=row){
            cout<<column;
            column++;
        }
        int k=row-1;
        while(k>=1){
            cout<<k;
            k--;
        }
        cout<<endl;
        row++;
    }
}

```


```other
    *
   ***
  *****
 *******
*********

#include<iostream>
using namespace std;
int main(){
	int i=1;
	int n;
	cin>>n;
	int row=1;
	while(row<=n){
		int spaces=1;
		while(spaces<=n-row){
			cout<<" ";
			spaces++;
		}
		int column=1;
		while(column<=row){
			cout<<"*";
			column++;
		}
		column=row-1;
		while(column>=1){
			cout<<"*";
			column--;
		}
		cout<<endl;
		row++;
	}
  
}
```


```other
    1
   232
  34543
 4567654
567898765

#include <iostream>
using namespace std;

int main() {
     int n;
     cin>>n;
     int row=1;
     while(row<=n){
         int spaces=1;
         while(spaces<=n-row){
             cout<<" ";
             spaces++;
         }
         int column=1;
         int start=row;
         while(column<=row){
             cout<<start;
             start++;
             column++;
         }
         column=row-1;
         int start1=row+column-1;
         while(column>=1){
             cout<<start1;
             start1=start1-1;
             column--;
         }
         cout<<endl;
         row++;
     }
    
}
```


```other
  *
 ***
*****
 ***
  *

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
        int num=(n/2)+1;
    int count = num - 1;
    for(int i = 1; i <= n/2+1; i++) {
        for(int j = 1; j <= count; j++) {
          printf(" ");
        }
        count--;
        for(int k = 1; k <= (2 * i) - 1; k++) {
          printf("*");
        }
        cout << endl;
    }
    count = 1;

    for(int i = 1; i <= (num - 1); i++) {
      for(int j = 1; j <= count; j++) {
    printf(" ");
      }

      count++;

      for(int k = 1; k <= (2 * ((n/2+1) - i)) - 1; k++) {
        printf("*");
      }

      cout<<endl;
    }
}
```

----
----

```other
1234554321
1234**4321
123****321
12******21
1********1

#include<iostream>
using namespace std;
int main(){
  int  n;
  cin>>n;
  int row=1;
  while(row<=n){
    int column=1;
    int start=1;
    while(column<=n-row+1){
      cout<<start;
      start++;
      column++;
    }
    column=row-1;     //bss mtlb h kitni baar print hogaaa  startting mai kitni baaar
    while(column>=1){
      cout<<"*";
      column--;

    }
      column=row-1;
    while(column>=1){
      cout<<"*";
      column--;

    }
     column=1;
    int start3=n-row+1;
    while(column<=n-row+1){
      cout<<start3;
      start3--;
      column++;
    }
    cout<<endl;
    row++;
  }
}
```

----

```other
#include<iostream>
using namespace std;
#include <climits>


int main(){
    int n;
    cin>>n;
    int max=INT_MIN,secondMax=INT_MIN;
    int num;
    int count=1;
    
    while(count<=n){
        cin>>num;
        if (num>max){
            secondMax=max;
            max=num;
        }
        else if(num>secondMax&&num!=max){
            secondMax=num;
        }
        count++;
        
        
    }
    cout<<secondMax<<endl;
    
}
```

----

```other
    1
   212
  32123
 4321234
543212345


#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int row=1;
  while(row<=n){
    int spaces=1;
    while(spaces<=n-row){
      cout<<" ";
      spaces++;
    }
    int column=1;
    int var=row;
    while(column<=row){
      cout<<var;
      var--;
      column++;
    }
    column=row-1;
    int start=2;
    while(column>=1){
      cout<<start;
      start++;
      column--;
    }
    cout<<endl;
    row++;

  }
  }
```

