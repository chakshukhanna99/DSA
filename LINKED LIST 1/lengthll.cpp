#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next=NULL;
    }
};
Node *takeinput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail=NULL;
    while(data!=-1){
        Node *newNode= new Node(data);
        if(head==NULL){
            head =newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}

int print(Node *head){
    int count=0;
    Node *temp=head;
    while(temp!=NULL){
        // cout<<temp->data<<" ";
        count++;
        temp= temp->next;
    }
    return count;
}
int main(){
    // Node n1(10);
    // Node *head=&n1;
   Node*head= takeinput();
    int x = print(head);
    cout<<x;

}