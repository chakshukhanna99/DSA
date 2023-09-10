#include<iostream>
using namespace std;
template<typename T>
class Node{
    public:
    T data;
    Node<T> *next;

    Node(T data){
        this->data=data;
        next=NULL;
    }
};
template<typename T>
class Stack{
    Node<T> *head;
    int size; //number of elements curerently in the stack
    public:
    Stack(){
        head=NULL;
        size=0;
    }
    int getsize(){
        return size;
    }
    bool isEmpty(){
        return (size==0);

    }
    void push(T element){
        Node<T> *newNode = new Node<T>(element);
        // if(head==null){
        //     head=newNode;
        
            newNode->next=head;
            head=newNode;
            size++;
        
               
    }
      T pop(){
        if(head==NULL){     //if(isEmpty)
            cout<<"stack is empty";
        }
       T ans =head->data;
       Node<T> *temp = head;
       head=head->next;
       delete temp;
       size--;
       return ans;

    }
    T top(){
        if(isEmpty()){
            return 0;
        }
        return head->data;

    }
};