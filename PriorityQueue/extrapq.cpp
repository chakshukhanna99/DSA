//imagine you want to create a heap where childindex>parentIndex
#include<iostream>
using namespace std;
int main(){
    int pq[50]={1,5,2,3,4};
    int n=5;  
    int childIndex=0;
    int parentIndex=(childIndex-1)/2;
    for(int i=0;i<n;i++){
        childIndex=i;
      if(pq[childIndex]<pq[parentIndex]){
        swap(pq[childIndex],pq[parentIndex]);
       }
    }
    for(int i=0;i<n;i++){
        cout<<pq[i]<<" ";
    }
    
}