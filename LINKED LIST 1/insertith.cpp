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
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node *takeinput(){
    int data;
    cin>>data;
    Node*head=NULL;
    Node*tail=NULL;
    while(data!=-1){
    Node *newNode = new Node(data);
    if(head==NULL){
        head=newNode;
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
Node *insert(Node *head,int i,int data){
    Node *newnode = new Node(data);
    int count=0;
    Node *temp=head;
    if(i==0){
        newnode->next=head;
        head=newnode;
        return head;
    }
    while(temp!=NULL && count<i-1){
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
    Node*a = temp->next;
    temp->next=newnode;
    newnode->next=a;

    }
    return head;
}
int main(){
    Node *head=takeinput();
    print(head);
    cout<<endl;
    head = insert(head,4,99);
    print(head);
}