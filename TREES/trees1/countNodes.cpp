
// #include<vector>
// #include"TreeNode.h"
// using namespace std;
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template <typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data){
        this->data=data;
    }
};
TreeNode<int>* takeInputL(){
    int rootData;
    cout<<"enter rooot data"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>*front= pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter No of children of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int childData;
            cout<<"Enter "<<i<<"th child of"<<front->data;
            cin>>childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter data"<<endl;
    cin>>rootData;
    TreeNode<int>* root= new TreeNode<int>(rootData);
    int n;
    cout<<"Enter number of children of "<<rootData<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
       TreeNode<int>*child= takeInput();
       root->children.push_back(child);
    }
    return root;

}
void printTree(TreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }

    
}
int count(TreeNode<int>* root){
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        ans+= count(root->children[i]);
    }
    return ans;
}
int main(){
    // TreeNode<int>* root = new TreeNode<int>(1);
    // TreeNode<int>* node1 = new TreeNode<int>(2);
    // TreeNode<int>* node2 = new TreeNode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    // TreeNode<int>* root = takeInput();
    TreeNode<int>* root =  takeInputL();
    printTree(root);
}
