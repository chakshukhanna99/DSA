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
    ~TreeNode(){
        for(int i=0;i<children.size();i++){
            delete children[i];
        }
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
     if(root==NULL){
        return 0;
    }
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
void printAtLevel(TreeNode<int>* root,int k){
   
    if(k==0){
        cout<<root->data<<endl;
    }
    for(int i=0;i<root->children.size();i++){
        printAtLevel(root->children[i],k-1);
    }
}
int getLeafNodeCount(TreeNode<int>* root) {
    // Write your code here
  if (root->children.empty()) {
        return 1;
    }
    int ans = 0;
    // Recursive case: Iterate through the children and count leaf nodes.
    for (int i = 0; i < root->children.size(); i++) {
        ans += getLeafNodeCount(root->children[i]);
    }
    return ans;
}
void preOrder(TreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++){
        preOrder(root->children[i]);
    }
}
void postOrder(TreeNode<int>* root){
    //   if(root->children.empty()){
    //         cout<<root->data;
    //     }
     if(root==NULL){
        return;
    }
    for(int i=0;i<root->children.size();i++){
      
        postOrder(root->children[i]);
        // cout<<root->children[i]->data;
    }
    cout<<root->data<<" ";
}
void deleteTree(TreeNode<int>* root){
    for(int i=0;i<root->children.size();i++){
        deleteTree(root->children[i]);
    }
    delete root;

}
int main(){
    TreeNode<int>* root =  takeInputL();
    printLevelWise(root);
    cout<<"NUm : " << count(root);
    cout<<"level 2: \n" ;
    printAtLevel(root,2);
    preOrder(root);
    cout<<"\nhello postOrder"<<endl;
    postOrder(root);
    // deleteTree(root);


}
// 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0