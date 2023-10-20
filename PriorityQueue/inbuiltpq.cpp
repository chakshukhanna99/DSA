//size()  empty  push(element)  T top()= getMin  void pop() = remove min
#include<queue>
#include<iostream>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(16);
    pq.push(43);
    pq.push(32);
    pq.push(45);
    pq.push(57);
    pq.push(67);

    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
}