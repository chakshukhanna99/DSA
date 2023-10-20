#include<iostream>
#include<vector>
using namespace std;
#include <climits>
class PriorityQueue {
    // Declare the data members here
    vector<int> pq;
   public:
    PriorityQueue() {
        // Implement the constructor here
    }

    /**************** Implement all the public functions here ***************/

    void insert(int element) {
        // Implement the insert() function here
        pq.push_back(element);
        int childIndex=pq.size()-1;
        // int parentIndex=(childIndex-1)/2;
        while(childIndex>0){
            int parentIndex = (childIndex-1)/2;
            if(pq[childIndex]>pq[parentIndex]){
                int temp=pq[childIndex];
                pq[childIndex]=pq[parentIndex];
                pq[parentIndex]=temp;
            }else{
                break;
            }
            childIndex=parentIndex;
        }

    }

    int getMax() {
        // Implement the getMax() function here
        if(isEmpty()){
            return 0;
        }
        return pq[0];
    }

int removeMax() {
    if (isEmpty()) {
        return 0;  // You might want to handle this case differently.
    }
    int ans = pq[0];
    int lastIndex = pq.size() - 1;
    int lastElement = pq[lastIndex];
    pq[0] = lastElement;
    pq.pop_back();

    int parentIndex = 0;
    int leftChild = (2 * parentIndex) + 1;
    int rightChild = (2 * parentIndex) + 2;

    while (leftChild < pq.size()) {
        int maxIndex = parentIndex;
        if (pq[maxIndex] < pq[leftChild]) {
            maxIndex = leftChild;
        }
        if (rightChild < pq.size() && pq[rightChild] > pq[maxIndex]) {
            maxIndex = rightChild;
        }
        if (maxIndex == parentIndex) {
            break;
        }
        int temp = pq[maxIndex];
        pq[maxIndex] = pq[parentIndex];
        pq[parentIndex] = temp;

                parentIndex = maxIndex;
        leftChild = (2 * parentIndex) + 1;
        rightChild = (2 * parentIndex) + 2;
    }
    return ans;
}


    int getSize() { 
        // Implement the getSize() function here
        return pq.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here
        return (pq.size()==0);
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
    cout<<p.getMax()<<endl;

    while(!p.isEmpty()){
        cout<<p.removeMax()<<" ";
    }

}
//nlogn+nlogn
//space complexity n vector of size n