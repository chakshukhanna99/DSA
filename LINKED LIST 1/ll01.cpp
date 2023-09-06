#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};
void print(Node *head){

}
int main(){
    //statically
    Node n1(1);
    Node *head = &n1;
    Node n2(2);
    n1.next=&n2;

    cout<<n1.data;
    cout<<head->data;
    cout<<n2.data;

    //Dynammically
    Node *n3 = new Node(10);
    Node *n4 = new Node(20);
    n3->next=n4;
    print(head);
}