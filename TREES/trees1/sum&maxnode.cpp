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
void printLevelWise(TreeNode<int>* root) {
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty()) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();

        cout << front->data << ":";

        for (int i = 0; i < front->children.size(); i++) {
            cout << front->children[i]->data;
            if (i != front->children.size() - 1) {
                cout << ",";
            }
            pendingNodes.push(front->children[i]);
        }
        cout << endl;
    }
}
int count(TreeNode<int>* root){
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        ans+= count(root->children[i]);
    }
    return ans;
}
int sumOfNodes(TreeNode<int>* root) {
    // Write your code here
      int ans=root->data;
    for(int i=0;i<root->children.size();i++){
        // ans+= count(root->children[i]);
        ans+= sumOfNodes(root->children[i]);
    }
    return ans;
}
TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    // Write your code here
    TreeNode<int>* ans = root; // Initialize ans to the root node
    for (int i = 0; i < root->children.size(); i++) {
        TreeNode<int>* childMax = maxDataNode(root->children[i]); // Recursively find max in the subtree
        if (childMax->data > ans->data) { // Compare data values
            ans = childMax; // Update ans if necessary
        }
    }
    return ans;
}
int main(){
    TreeNode<int>* root =  takeInputL();
    printLevelWise(root);
}
