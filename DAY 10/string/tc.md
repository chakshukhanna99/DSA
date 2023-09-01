largest of array

n 

ja rhe h hrr number pe max check krr rhe h  n ko cons se kra

bubble sort

n2

#### The worst case time complexity of Linear search is :


not in array last element.  n

#### Worst case time complexity of insertion sort is ?


n2

#### Worst case time complexity of Selection sort is ?


#### Two main measures for the efficiency of an algorithm are -


time ad space’

#### In theoretical analysis of an algorithm, the time complexity is measured by


Counting the number of unit operations

#### If the number of primary operations of an algorithm that takes an array of size n as input are 3n^2 + 5n. The worst case time complexity of the algorithm will be ?


n2

```other
for(int i = 0; i < n; i++){
    for(; i < n; i++){
        cout << i << endl;
    }
}
```


n2

```other
  for(int i = 0; i < n; i++){
     for(int j = 1 ; j < k; j++){
        cout << (i + j ) << endl;
      }
  }
```


n

2 Note : Assume k to be a constant value

#### For merging two sorted arrays of size m and n into a sorted array of size m+n, we require operations -


m+n

To merge two sorted arrays of sizes m and n into a sorted array of size m+n, we require a total of m+n comparisons and assignments in the worst case scenario.

#### Worst case time complexity of Binary Search is ?


O(LogN)

**for recursion**

tn = tn-1 +k

tn-1=tn-2+k

tn-2 = tn-3+k

t1=k+t0

t0=k

merge sort 

2t n/2.  + n

```other
int multiplyRec(int m, int n){
    if(n == 1)
        return m;
    return m + multiplyRec(m,  n - 1);  
}
```


o(n)

```other
int sumOfDigits(int n){
        int sum;
        if(n < 10){
            return n;
        }
        sum = (n % 10) + sumOfDigits(n / 10);
        return sum;
}
```


logn 

```other
long fib(int n){
    if(n == 0 || n == 1){
         return n;
    }
    return fib(n - 1) + fib(n - 2);
}
```


2*n

logn|n|nlogn|n2|n3|2*n
