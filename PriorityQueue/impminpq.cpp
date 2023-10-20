#include<iostream>
#include<vector>
using namespace std;
class PriorityQueue { 
vector<int> pq;
public:
PriorityQueue(){
}
int getSize(){
    return pq.size();
}
bool isEmpty(){
    return (pq.size()==0);
}
int getMin(){
    if(isEmpty()){
        return 0;
    }
    return pq[0];
}
void insert(int element){
    pq.push_back(element);
    int childIndex = pq.size()-1;
    while(childIndex>0){
    int parentIndex = (childIndex-1)/2;
    if(pq[childIndex]<pq[parentIndex]){
        // swap(pq[childIndex],pq[parentIndex]);
        int temp = pq[childIndex];
        pq[childIndex]=pq[parentIndex];
        pq[parentIndex]=temp;
    }
    else{
        break;
    }
    childIndex=parentIndex;
    }
    // parentIndex = (childIndex-1)/2;
}
int removeMin(){
    if(isEmpty()){
        return 0;
    }
    int ans = pq[0];
    int lastIndex = pq.size()-1;
    int lastElement = pq[lastIndex];
    pq[0]=lastElement;
    pq.pop_back();
    int parentIndex=0;
    int leftChild = (2*parentIndex)+1;
    int rightChild = (2*parentIndex)+2;    
while(leftChild < pq.size()){
    int minIndex = parentIndex;
    if(pq[leftChild]<pq[minIndex]){
        minIndex=leftChild;
    }
    if(pq[rightChild]<pq[minIndex] && rightChild<=pq.size()){
        minIndex=rightChild;
    }
    if(minIndex==parentIndex){
        break;
    }
    int temp= pq[minIndex];
    pq[minIndex]=pq[parentIndex];
    pq[parentIndex]=temp;

    parentIndex=minIndex;
    leftChild=(parentIndex*2)+1;
    rightChild=(parentIndex*2)+2;
    }
return ans;
}
};
int main(){
    PriorityQueue p;
    p.insert(100);
    p.insert(10);
    p.insert(15);
    p.insert(4);
    p.insert(17);
    p.insert(21);
    p.insert(16);

    cout<<p.getSize()<<endl;
    cout<<p.getMin()<<endl;

    while(!p.isEmpty()){
        cout<<p.removeMin()<<" ";
    }

}
//nlogn+nlogn
//space complexity n vector of size n