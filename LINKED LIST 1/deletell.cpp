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
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node *takeinput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
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
Node *deleteNode(Node *head, int pos)
{
if(head==NULL){
	return NULL;
}

if (pos == 0) {
    Node *tempNode = head;
    head = head->next;
    delete tempNode;
    return head;
}
int count = 0;
Node *temp = head;
while (count < pos - 1 && temp != NULL) {
    temp = temp->next;
    count++;
}
// Check if the position pos is valid (i.e., within the list)
if (temp == NULL || temp->next == NULL) {
    return head;
}
// Perform the deletion by adjusting the next pointer of the previous node
Node *nodeToDelete = temp->next;
temp->next = nodeToDelete->next;
// Free the memory allocated for the deleted node
delete nodeToDelete;
return head;

}
int main(){
   Node *head;
   head= takeinput();
   print(head);
   cout<<"\n";
   head = deleteNode(head,2);
   print(head);
    
}