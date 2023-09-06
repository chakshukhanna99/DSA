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

int length(Node *head){
 	int count=0;
	Node *temp=head;
	if(temp==NULL){
		return count;
	}
	int so = length(temp->next);
	return 1+so;
}
int main(){
    // Node n1(10);
    // Node *head=&n1;
   Node*head= takeinput();
    int x = length(head);
    cout<<x;

}